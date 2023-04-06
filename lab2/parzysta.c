#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, wynik1;
    double wynik2, wynik3 = 0;
    printf("Podaj swoja liczbe: ");
    scanf("%d", &a);
    printf("Podana liczba to: %d", a);
    wynik1 = a/4;
    wynik2 = a/4;
    wynik3 = wynik2 - wynik1;
    printf("wynik1 wynosi %d", wynik1);
    printf("\nwynik2 i 3 wynosi %lf, %lf",wynik2, wynik3);

    if(wynik3 == 0)
    {
        printf("Liczba jest podzienlna na 2.");
    }else
    {
        printf("Liczba nie jest podzielna na 2.");
    }

    return 0;
}