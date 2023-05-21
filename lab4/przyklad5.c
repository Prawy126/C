#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int TAB_SIZE = 20;
    char tab[20] = "abcdefghijklmnoprst";

    // char *ptr_tab = tab - inicjalizacja wskaźnika i przypisanie mu adresu pierwszego elementu tablicy
    // warunekt ograniczający *ptr_tab nie potrzebuje operatora porównania ponieważ jeśli trafimy na koniec tablicy otrzymamy wartość 0(false)
    // warunek zwiększenia licznika pętli zwiększa licznik na kolejny adres w pamięci
    for (char *ptr_tab = tab; *ptr_tab; ptr_tab++)
    {
        printf("Wartosc: %c \n", *ptr_tab);
    }
    return 0;
}