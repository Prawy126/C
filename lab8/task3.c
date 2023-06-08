#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

/*Napisz program task3 który wypisze zawartość pliku file.txt. Następnie poprosi o podanie nazwy przedmiotu oraz ceny przez użytkownika, dopisze je do pliku po czym wypisze jego nową zawartość i zakońćzy działanie. Przy kolejnych uruchomieniach program powienien sam generować kolejne numerki przedmiotów.

Zawartosc pliku:
1 Bike 432
2 Monitor 200

Dodaj nowy przedmiot:
nazwa: Helmet
cena: 376

Zawartosc pliku:
1 Bike 432
2 Monitor 200
3 Helmet 376*/

int main(){
    FILE *file;
    char line[100];
    bool lineExists = false;
    int liczba;
    // Sprawdzanie czy linijka z numerem "2." istnieje
    file = fopen("tekst.txt", "r");
    if (file != NULL) {
        while (fgets(line, sizeof(line), file) != NULL) {
            if (line[0] == '2' && line[1] == ' ' && strcmp(line, "2 Monitor 200\n") == 0) {
                lineExists = true;
                liczba = line[0];
                break;
            }
        }
        
    }
    char tab[10];
    int cena;
    FILE *plik = fopen("tekst.txt","a");
    printf("Dodaj nowy przedmiot: \n");
    printf("nazwa:");
    scanf("%s",tab);
    printf("cena: ");
    scanf("%d",&cena);
    fprintf(plik,"%d %s %d",liczba+1,tab,cena);
    fclose(file);
    fclose(plik);
    return 0;
}