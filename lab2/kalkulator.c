#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int wartosc1, wartosc2, wynik;
    char znak;

    printf("Kalkulator\n");
    printf("Podaj liczbe: ");
    scanf("%d", &wartosc1);
    printf("\nPodaj znak: ");
    scanf("%s", &znak);
    printf("\nPodaj liczbe: ");
    scanf("%d", &wartosc2);

    switch(znak)
    {
        case '+': wynik = wartosc1 + wartosc2; break;
        case '-': wynik = wartosc1 - wartosc2; break;
        case '*': wynik = wartosc1 * wartosc2; break;
        case '/': wynik = wartosc1 / wartosc2; break;
    }

    printf("Wynik wynosi: %d", wynik);
}