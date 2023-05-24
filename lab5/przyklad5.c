#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Wczytanie od użytkownika zmiennych różnych typów
    // pierwszy argumentt funkcji scanf() to format w postaci:
    // %[ilość znaków do wczytania][modyfikator typu np. l dla long][typ]
    int long i;
    printf("Podaj wartosc typu int: ");
    // zostaną wczytane tylko 4 występujące jako pierwsze po znaku spacji
    scanf("%4ld", &i);
    printf("i = %ld\n", i);

    unsigned char character;
    printf("Podaj wartosc typu char: ");
    // jeśli podamy zbyt wiele znaków dla poprzedniej instrukcji scanf wtedy kolejny znak będzie odczytany przez tą instrukcję.
    scanf(" %c", &character);
    printf("character = %c\n", character);
}