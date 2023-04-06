#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a[3][3];
    int b, c, d; 
   for(int j = 0; j<2; j--)
   {
        printf("1) Srednia z wybranej kolumny,\n");
        printf("2) Srednia z wybranego wiersza, \n");
        printf("3) Modyfikacja wybranej komórki,\n");
        printf("4) Koniec\n");
        printf("\nPodaj liczby ca;kowite z pierwszego wiersza: ");
        scanf("%d %d %d ", &a[0][0], &a[0][1], &a[0][2]);
        printf("\nPodaj liczby calkowite z drugiego wiersza: ");
        scanf("%d %d %d ", &a[1][0], &a[1][1], &a[1][2]);
        printf("\nPodaj liczby calkowite z trzeciego wiersza: ");
        scanf("%d %d %d ", &a[2][0], &a[2][1], &a[2][2]);
        int suma;
        float srednia;
    int i, x, y;
        printf("\nPodaj wartosc czynnosci ktora chcesz wykonac: ");
        scanf("%d", &b);
        /*printf("\nwybrana wartosc to: %d", b);*/
        switch(b)
        {
            case 1: 
                printf("Podaj numer kolumny:");
                scanf("%d", &i);
                i--;
                
                printf("%d", i);
                suma = a[i][0]+a[i][1]+a[i][2];
                srednia = suma/3;
                printf("Sredani wynsi: %f", srednia);
                break;
            case 2:
                printf("Podaj numer wiersza:");
                scanf("%d", &i);
                i--;
        
                printf("%d", i);
                suma = a[0][i]+a[1][i]+a[2][i];
                srednia = suma/3;
                printf("Sredani wynsi: %f", srednia);
                break;
            case 3: 
           
            printf("Prosze podac numer kolumny i wiersza w ktorym chcesz zmienic wartosc: ");
            scanf("%d %d", &x, &y );
            printf("\nProsze podac wartosc tej komorki: ");
            scanf("%d", a[x][y]);
            case 4:
                j=100;  
            break;
            default:
            printf("Prosze podac poprawna wartosc ") ;
        }
    }
    return 0;
}