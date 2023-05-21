#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>

/*Utwórz i przetestuj funkcję mean() która jako argument przyjmuje 10-elementową tablicę liczb całkowitych a następnie zwraca średnią z tablicy.*/

float mean(int tab[10]){
    float wynik;
    for(int i=0;i<10;i++){
        wynik+=tab[i];
    }
    wynik/=10;
    return wynik;
}

int main(){
    int tab[10]={1,2,3,4,5,6,7,8,9,120};
    printf("%f",mean(tab));
    return 0;
}