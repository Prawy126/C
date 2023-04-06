#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int compare(char *tab1, char *tab2)
{
    int wynik=0;
    for(int i=0;i<10;i++)
    {
        if(tab1[i]!=tab2[i])
        {
            wynik=wynik+1;
        }
    }
    return wynik;
}

int main()
{
    char tab1[10]="tablica";
    char tab2[10]="tablica";
   int x=compare(tab1,tab2);
   printf("%d",x);
    return 20;
}