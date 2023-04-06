#include<stdlib.h>
#include<stdio.h>

int max_tab(int *tab)
{
    int pomoc=tab[0];
    for(int i=1;i<10;i++)
    {
        
        if(tab[i]>pomoc)
        {
            pomoc=tab[i];
        }
    }
    return pomoc;
}

int main()
{
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    int wynik;
    wynik=max_tab(tab);
    printf("max: %d",wynik);
    return 0;
}