#include<stdlib.h>
#include<stdio.h>

void show(char imie[10],char nazwisko[20], int wiek, int album)
{
    printf("Imie: %s\nNazwisko: %s\nLat: %d\nNumer albumu: %d", imie, nazwisko, wiek, album);
}

int sum(int a,int b,int c)
{
    int suma;
    suma = a + b + c;
    return suma;
}

int main()
{
    char imie[10]="Michal";
    char nazwisko[20]="Pilecki";
    int wiek=19, album=123132;
    show(imie, nazwisko, wiek, album);
    int a=2,b=5,c=6,wynik;
    wynik=sum(a,b,c);
    printf("\nWynik sumy:%d",wynik);
    return 0;
}