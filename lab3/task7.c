#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>


/*Napisz program który przechowuje w tablicy 3x3 wartości podane przez użytkownika.

Dodaj do programu menu z następującymi opcjami:

Średnia z wybranej kolumny
Średnia z wybranego wiersza
Modyfikacja wybranej komórki
Wyjście z progrmau
Program ma działać dopóki użytkownik nie wybierze opcji 4. W przypadkach 1,2,3 ma umożliwiać użytkownikowi wybranie wiersza/koumny a następnie wykonywać odpowiednie obliczenia*/


int main(){
   float tab[3][3],srednia;
    bool odpowiedz=true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Prosze podac wartosc komurki %d %d: ", i, j);
            scanf("%f", &tab[i][j]);
            printf("Wartosc komurki %d %d: %f\n", i, j, tab[i][j]);
        }
    }
    int x,kolumna, wiersz;
    while(odpowiedz){
        printf("1)Srednia z wybranej kolumny\n2)Srednia z wybranego wiersza\n3)Modyfikacja wybranej komórki\n4)Wyjście z progrmau");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Prosze podac numer kolumny: ");
            scanf("%d",&kolumna);
            srednia = 0;
            for(int i = 0;i<3;i++){
                srednia +=tab[i][kolumna];
            }
            srednia/=3;
            break;
        case 2:
            printf("Prosze podac numer wiersza: ");
            scanf("%d",&wiersz);
            srednia = 0;
            for(int i = 0;i<3;i++){
                srednia +=tab[wiersz][i];
            }
            srednia/=3;
            break;
        case 3:
            printf("Prosze podac numer wiersza i kolumny do modyfikacji: ");
            scanf("%d %d",&wiersz, &kolumna);
            printf("Prosze podac wartosc dla komurki %d %d: ");
            scanf("%f",&tab[wiersz][kolumna]);
            break;
        case 4:
            odpowiedz = false;
        default:
            printf("Podana wartosc jest poza zakresem menu!!!\nProsze podac poprawna wartosc");
            break;
        }
    }
    return 0;
}