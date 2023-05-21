#include <stdio.h>

int main(int argc, char const *argv[])
{
    char tab[20];

    char *ptr_tab = tab;
    printf("Adres pierwszego elementu tablicy (tab[0]): %p\n", *ptr_tab);
    printf("Wartosc: (tab[0]): %c \n", tab[0]);
    printf("Wartosc za pomoca wskaznika: (tab[0]): %c\n", *ptr_tab);
    /* code */
    return 0;
}