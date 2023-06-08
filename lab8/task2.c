#include <stdio.h>
#include <stdbool.h>
#include<string.h>

int main() {
    FILE *file;
    char line[100];
    bool lineExists = false;

    // Sprawdzanie czy linijka z numerem "2." istnieje
    file = fopen("tekst.txt", "r");
    if (file != NULL) {
        while (fgets(line, sizeof(line), file) != NULL) {
            if (line[0] == '2' && line[1] == ' ' && strcmp(line, "2 Monitor 200\n") == 0) {
                lineExists = true;
                break;
            }
        }
        fclose(file);
    }

    // Dodawanie linijki "2 Monitor 200" do pliku, jeśli nie istnieje
    if (!lineExists) {
        file = fopen("tekst.txt", "a");
        if (file != NULL) {
            fprintf(file, "2 Monitor 200\n");
            fclose(file);
            printf("Linijka dodana do pliku.\n");
        } else {
            printf("Nie można otworzyć pliku.\n");
        }
    } else {
        printf("Linijka już istnieje w pliku.\n");
    }

    return 0;
}
