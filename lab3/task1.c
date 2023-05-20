#include<stdlib.h>
#include<stdio.h>
/*Utwórz program który przechowa dane następującej tabeli:

3.1	3.6
2.2	6.42
3.1	3.6
3.5	32.6
Wypisz w konsoli zaznaczoną wartość używając indeksów. Zmodyfikuj program tak by użytkownik mógł wskazać który element tablicy chce odczytać.*/
int main(){

    float tab[4][2]={{3.1,3.6},{2.2,6.42},{3.1,3.6},{3.5,32.6}};

    for(int i=0;i<4;i++){
        for(int j = 0;j<2;j++){
            printf("%0.1f ",tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}