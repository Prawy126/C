#include<stdlib.h>
#include<stdio.h>

double mean(double tab[10])
{
    double wynik,suma;
    for(int i=0;i<10;i++)
    {
        suma+=tab[i];
    }
    wynik=suma/10;
    return wynik;
}

int main()
{
    double tab[10]={1,2,3,4,5,6,7,8,9,10};
    double wynik;
    wynik=mean(tab);
    printf("Srednia: %f",wynik);
    return 0;
}