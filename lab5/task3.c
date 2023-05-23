#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*Zadeklaruj zmienną string przechowującą łańcuch znaków o długości 200 znaków. Wartość zmiennej podaje użytkownik. Wypisz informację o ilości znaków w zmiennej:

z wykorzystaniem funkcji biblioteki standardowej.
bez korzystania z biblioteki standardowej.*/

int main() {
    char string[200];
    printf("Prosze podac ciag znakow, a program policzy ciag znakow: ");
    fgets(string, sizeof(string), stdin);

    int wynik = 0;
    for (int i = 0; i < 200; i++) {
        if (string[i] != '\0') {
            wynik++;
        } else {
            break; // Stop counting when null terminator is encountered
        }
    }

    size_t x = strlen(string);
    printf("\nDlugosc lancucha wynosi (bez korzystania z biblioteki standardowej): %d", wynik-1);
    printf("\nDlugosc lancucha wynosi (z wykorzystaniem funkcji biblioteki standardowej): %zu", x-1);

    return 0;
}
