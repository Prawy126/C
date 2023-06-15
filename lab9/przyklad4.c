#include <stdio.h>
#include <stdlib.h>

int *alocateTabMalloc(int a)
{
    int rozmiar_tablicy = a * sizeof(int); // ilość elementów * rozmiar jednego elementu
    int *ptr = malloc(rozmiar_tablicy);
    return ptr;
}

int *alocateTabCalloc(int a)
{
    int *ptr = calloc(a, sizeof(int)); // alokuje określoną ilość w pamięci danego typu i ustawia wartości w pamięci na 0.
    return ptr;
}

int main(int argc, char const *argv[])
{
    int *tab = alocateTabMalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab[%d] = %d (poza tablica)\n", i, tab[i]);
            continue;
        }
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    int *tab2 = alocateTabCalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab2[%d] = %d (poza tablica)\n", i, tab2[i]);
            continue;
        }
        printf("tab2[%d] = %d\n", i, tab2[i]);
    }

    // kopiuje wskaźnik do tablicy tab2
    int *ptr2 = tab2;
    // zwalniam pamięć
    free(tab2);
    // Wypisuję zawartość pamięci
    for (size_t i = 0; i <= 5; i++)
    {
        printf("ptr2[%d] = %d (zwomnione miejsce)\n", i, ptr2[i]);
    }

    return 0;
}