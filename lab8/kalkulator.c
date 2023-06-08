#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

/*Napisz program kalkulator który będzie posiadał opcje dodawania, odejmowania, mnożenia, dzielenia, potęgowania i obliczania pierwiastka stopnia drugiego z liczby. Kalkulator powinien zapisywać historię wykonywanych działań do pliku log.txt.*/

int main(){
    double wynik, a, b;
    int wybor;
    bool koniec = true;
    FILE *plik = fopen("log.txt","a+");
     if(plik==NULL){
        perror("nie udalo sie otworzyc pliku");
        return 1;
    }
    while(koniec){
        printf("KALKULATOR\n");
        printf("1) dodawanie\n2)odejmowanie\n3)mnozenie\n4)dzielenie\n5)potegowanie\n6)pierwiastkowanie\n7)wyjscie\n");
        printf("Podaj numer operacji ktora chcesz wykonac: ");
        scanf("%d",&wybor);
        switch (wybor)
        {
        case 1:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            printf("\nPodaj druga liczbe: ");
            scanf("%lf",&b);
            wynik = a + b;
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 2:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            printf("\nPodaj druga liczbe: ");
            scanf("%lf",&b);
            wynik = a - b;
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 3:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            printf("\nPodaj druga liczbe: ");
            scanf("%lf",&b);
            wynik = a * b;
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 4:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            printf("\nPodaj druga liczbe: ");
            scanf("%lf",&b);
            wynik = a / b;
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 5:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            printf("\nPodaj druga liczbe: ");
            scanf("%lf",&b);
            wynik = pow(a, b);
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 6:
            printf("Podaj pierwsza liczbe: ");
            scanf("%lf",&a);
            wynik = sqrt(a);
            printf("Wynik wynosi: %lf\n",wynik);
            fprintf(plik,"Wynik wynosi: %lf\n",wynik);
            break;
        case 7:
            exit(0);
        default:
            printf("Nie ma takiej opcji w menu");
            break;
        }
    }
    fclose(plik);
    return 0;
}