#include <stdio.h>
#include <stdlib.h>

/*Utwórz pliki utils.c. W pliku utwórz funkcję filetoarray(char *path) która odczyta dane z pliku którego nazwa przekazana jest przez parametr path. W funkcji utwórz tablicę zdolną przechować cały plik (można wykorzystać funkcję malloc()). Następnie wypełnij tablicę danymi z pliku. Funkcja powinna zwrócić wskaźnik do wypełnionej tablicy.

Przetestuj działanie funkcji na pliku file.txt i wypisz rezultat w konsoli (zawartość tablicy zwróconej przez funkcję filetoarray()).*/

char* filetoarray(const char* path) {
    FILE* file = fopen(path, "a+");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return NULL;
    }

    // Określanie rozmiaru pliku
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    // Alokacja pamięci dla tablicy
    char* array = (char*)malloc((fileSize + 1) * sizeof(char));
    if (array == NULL) {
        printf("Błąd alokacji pamięci.\n");
        fclose(file);
        return NULL;
    }

    // Odczytywanie danych z pliku i wypełnianie tablicy
    size_t bytesRead = fread(array, sizeof(char), fileSize, file);
    if (bytesRead != (size_t)fileSize) {
        printf("Blad odczytu pliku.\n");
        free(array);
        fclose(file);
        return NULL;
    }

    array[fileSize] = '\0';  // Dodanie znaku null jako końca tablicy

    fclose(file);
    return array;
}

int main() {
    const char* path = "C:/Users/micha/Desktop/strona_internetowa/nauka/c/lab8/tekst.txt";
    char* array = filetoarray(path);

    if (array != NULL) {
        printf("Zawartość pliku %s:\n%s\n", path, array);
        free(array);
    }

    return 0;
}
