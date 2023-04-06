#include<stdlib.h>
#include<stdio.h>
#include<string.h>

float stats(float tab[10],char tab1[10])
{
    float pomoc,wynik;
    if(tab1[1]=='i')
    {
        for(int i=1;i<10;i++)
        {
            if(tab[i]<tab[i-1])
            {
                pomoc=tab[i];
            }
            else
            {
                pomoc=tab[0];
            }
        }
        
        return pomoc;
    }
    pomoc=0;
    if(tab1[1]=='a')
    {
        for(int i=1;i<10;i++)
        {
            if(tab[i]<tab[i-1])
            {
                pomoc=tab[i];
            }
            else
            {
                pomoc=tab[0];
            }
        }
        return pomoc;
    }
    pomoc=0;
    if(tab1[2]=='d')
    {
        wynik=(tab[4]+tab[5])/2;
        return wynik;
    }
    pomoc=0;
    if(tab1[2]=='a')
    {
        for(int i=0;i<10;i++)
        {
            pomoc+=tab[i];
        }
    
        wynik=pomoc/10;
        return wynik;
    }
    

}

int main()
{
    char tab1[10]="mean";
    float tab[10]={1,2,3,4,56,7,8,9,20};
    float x;
    x=stats(tab,tab1);
    printf("Srednia: %f",x);
    return 0;
}