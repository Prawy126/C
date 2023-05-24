#include<stdlib.h>
#include<stdio.h>

/*Utwórz program który wypisuje liczby od 0 do 20.

Utwórz program który wypisuje liczby od 5 do 25.

Utwórz program który wypisuje liczby od 20 do 0.

Utwórz program który wypisuje począwszy od 1 co 3 kolejną liczbę do wartości 50.

Utwórz program który wypisuje 100 liczb podzielnych przez 5.*/

int main(){

    for(int i = 0;i<=20;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 0;i<=20;i++){
        printf("%d ",i+5);
    }
    printf("\n");
    for(int i = 20;i>=0;i--){
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 1;i<=50;i+=3){
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 0;i<=100;i+=5){
        printf("%d ",i);
    }
    

    return 0;
}