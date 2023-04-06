#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tab[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("prosze podac wartosc z pola (%d,%d)\n",i,j);
            scanf("%d",&tab[i][j]);
        }
    }
    for(int g=0;g>-1;g++)
    {
        int x,a,b;
        float wynik=0;
        printf("1)Srednia z wybranej kolumny\n2)Srednia z wybranego wiersza\n3)Modyfikacja wybranej komorki\n4)Wyjscie z progrmau\n");
        scanf("%d",&x);
        int  h,o;
        switch (x)
        {
        case 1:
            printf("Prosze podac wartosc kolumny: ");
            scanf("%d",&a);
            for(int i=0;i<3;i++)
            {
                wynik=wynik+tab[i][x];
            }
            wynik=wynik/3;
            printf("\n%f\n",wynik);
            break;
        case 2:
        printf("Prosze podac wartosc kolumny: ");
            scanf("%d",&a);
            for(int i=0;i<3;i++)
            {
                wynik=wynik+tab[x][i];
            }
            wynik=wynik/3;
            printf("\n%f\n",wynik);
            break;
        case 3:
            
            printf("proszepodac numer kolumny i wiersza:");
            scanf("%d %d",&h,&o);
            printf("\nprosze podac warotsc: ");
            scanf("%d",&x);
            x=tab[h][o];
            printf("%d",x);
            break;
        case 4:
        g=-2;
        printf("zamykanie programu");
        default:
            break;
        }

    }
}
