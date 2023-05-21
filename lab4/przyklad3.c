#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr; // deklaracja zmiennej przechowującej adres w pamięci. (wskaźnik)

    char a = 'a';

    printf("Wartosc przechowywana przez zmienna a: %c\n", a);

    // Za pomocą operatora &nazwa_zmiennej można odczytać adres komórki w pamięci.
    // !Adres jest w formacie szesnastkowym, należy użyć odpowiedniego typu funkcji printf() aby go wypisać poprawnie.
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p\n", &a);

    ptr = &a; // Przypisanie adresu zmiennej a dla zmiennej wskaźnikowej
    
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p \n", ptr);
    // Aby odczytać wartość znajdującą się pod danym adresem używamy operatora wyłuskania "*"
    printf("Wartosc przechowywana pod adresem przechowaynym przez wskaznik %c\n", *ptr);

    // Zmiana wartości za pomocą wskaźnika
    *ptr = 'b';
    printf("Nowa wartosc zmiennej a: %c",a);

    return 0;
}