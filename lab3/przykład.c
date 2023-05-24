#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int array[3]; // Deklaracja tablicy o wielkości 3
    array[0] = 1; // Ustawienie kolejnych wartości w tablicy
    array[1] = 2;
    array[2] = 3;
    array[3] = 4; // Zachowanie "Undefined" ponieważ wykraczamy poza zakres tablicy. Wartość może ulegać zmianie w czasie działania systemu ponieważ program nie zarezerwował tego miejsca w pamięci.
     
    printf("Wielkość tablicy w bajtach: %i\n",sizeof(array));
    printf("Ponieważ wielkość int - %i bajtów razy wielkość tablicy - 3\n", sizeof(int));
    printf("array[0] = %i\n", array[0]);
    printf("array[1] = %i\n", array[1]);
    printf("array[2] = %i\n", array[2]);
    printf("array[3] = %i\n", array[3]); // poza zakresem zadeklarowanej tablicy
    printf("array[4] = %i\n", array[4]); // poza zakresem zadeklarowanej tablicy
    return 0;
}