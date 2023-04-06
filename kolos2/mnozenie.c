#include<stdlib.h>
#include<stdio.h>

int kolumna;

void matirx_muliplication(float (*tab)[kolumna],int kol, int wier, float mnoznik)
{
    for(int i=0;i<wier;i++)
    {
        for(int j=0;j<kol;j++)
        {
            tab[i][j]=tab[i][j]*mnoznik;

        }
    }

}

void print_matrix(float (*tab)[kolumna],int kol, int wier)
{
    for(int i=0;i<wier;i++)
    {
        for(int j=0;j<kol;j++)
        {
           
            printf("%f ",tab[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    float tab[3][2]={{0.0000, 0.1000}, {1.0000, 1.1000}, {2.0000, 2.1000 }};
    int mnoznik=2, kol=2,wier=3;
   kolumna=2;
    matirx_muliplication(tab,kol,wier,mnoznik);
    print_matrix(tab,kol,wier);
    
    return 0;
}