#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void duplicateRow(float *tab,int rozmiar,int index,int powtorzenia)
{
    if(index + powtorzenia > rozmiar)
    {
        printf("Warning: Elements exceded size od array!\n");
        exit(1);
    }
    int pomoc=tab[index];
    memcpy(pomoc,tab,powtorzenia);
    
}

int main()
{
    int r=9,n=2,p=10;
    float tablica[100] = {1.0, 2.0, 1.0, 2.0, 0, 0, 0, 0, 0};
    duplicateRow(tablica,r,n,p);
    for(int i=0;i<r;i++)
    {
        printf("%f\n",tablica[i]);
    }
    return 0;
}
