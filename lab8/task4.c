#include<stdlib.h>
#include<stdio.h>

/*Napisz program file_stat który wypisze liczbę znaków w pliku file.txt. Rozbuduj program aby wyświetlał liczbę linii w pliku. Rozbuduj program tak aby wypisywał rozmiar pliku wyrażony w kB lub Bajtach.*/

int main(){

    FILE *file;
    char ch;
    int charCount = 0;
    int lineCount = 0;
    long fileSize = 0;

    file = fopen("tekst.txt", "r");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    // Obliczanie liczby znaków i liczby linii
    while ((ch = fgetc(file)) != EOF) {
        if (ch != '\n') {
            charCount++;
        }
        if (ch == '\n') {
            lineCount++;
        }
        fileSize++;
    }

    fclose(file);

    printf("Liczba znakow: %d\n", charCount);
    printf("Liczba linii: %d\n", lineCount);
    printf("Rozmiar pliku: %ld Bajtow\n", fileSize);
    printf("Rozmiar pliku: %f kB\n", (float)fileSize / 1024);

    return 0;
}