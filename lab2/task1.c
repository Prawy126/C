#include<stdio.h>
#include<stdlib.h>
/*Interakcja z programem - printf() scanf()
Korzystając z dokumentacji funkcji printf utwórz program task1.exe który przechowuje w następujących zmiennych:

name - imię
surname - nazwisko
age - wiek
albumNumber - numer albumu
PI_VALUE - wartość liczby pi(stała wartość - constant)
a następnie wypisuje w standardowym wyjściu te informacje.*/
void main(){
    char imie[10] = "Michal";
    char nazwisko[10]= "Pilecki";
    int albumNumer = 125151;
    float const pi = 3.14;
    printf("Imie: %s Nazwiko: %s ",imie,nazwisko);
    printf("\nNumer albumu: %d",albumNumer);
    printf("\nStala wartosc liczby PI w przyblizeniu: %f",pi);

}