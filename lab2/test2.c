#include <stdio.h>

int main()
{
    int var1, var2, wynik;
    

    printf("kalkulator");
    printf("\nPodaj liczbe: ");
    scanf("%d",&var1);
    scanf("%d",&var2);
    wynik = var1 + var2;
    printf("Wynik: %d", wynik);
    scanf("Wynik: %d", wynik);
    return 0;
}