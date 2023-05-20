#include<stdlib.h>
#include<stdio.h>

/*Napisz program który prosi użytkownika o wpisanie liczby a nastepnie sprawdza czy podana liczba jest podzielna przez 2 i wypisuje odpowiednią informacje.*/

int main(){
    int a;
    printf("Prosze podac liczbe: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("\nliczba jest podzielna przez 2 czyli jest parzysta");
    }else{
        printf("\nliczba nie dzieli sie przez 2 wiec nie jest parzysta");
    }

    return 0;
}