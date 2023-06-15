#include <stdio.h>
#include <stdlib.h>

union myunion
{
    char a;
    int b;
    double c;
};

struct mystruct {
    char a;
    int b;
    double c;
};


int main(int argc, char const *argv[])
{
    union myunion myunion;
    struct mystruct mystruct;

    printf("ilosc bajtow ktore zajmuje unia = %i (max_zmienna=%i)\n", sizeof(myunion), sizeof(double));
    // Jeśli zmienne w strukturze posortujemy malejąco według zajmowanego miejsca w pamięci rozmiar struktury będzie mniejszy
    printf("ilosc bajtow ktore zajmuje struktura = %i (%i+%i+padding+%i)\n", sizeof(mystruct), sizeof(char), sizeof(int), sizeof(double));
    return 0;
}