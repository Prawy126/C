#include<stdlib.h>
#include<stdio.h>

/*Korzystając z dokumentacji biblioteki string.h utwórz i przetestuj funkcję stats() która jako argument przyjmuje 10-elementową tablicę liczb całkowitych oraz łańcuch znaków który w zależności od przechowywanej zmiennej sprawi że funkcja zwróci inną wartość:

min - minimalną wartość z tablicy
max - maksymalną wartość z tablicy
median - medianę z tablicy
mean - średnią z tablicy*/

float stats(int tab[10],char tabc[3]){
    float wynik;
    if(tabc[1]=='i'){
        wynik=tab[0];
        for(int i = 1;i<10;i++){
            if(tab[i]<wynik){
                wynik = tab[i];
            }
        }
    }else if(tabc[1]=='a'){
        wynik=tab[0];
        for(int i = 1;i<10;i++){
            if(tab[i]>wynik){
                wynik = tab[i];
            }
        }
    }else if(tabc[2]=='d'){
        wynik=(tab[4]+tab[5])/2;
    }else if(tabc[2]=='a'){
        for(int i = 0;i<10;i++){
            wynik+=tab[i];
        }
        wynik/=10;
    }
    return wynik;
}


int main(){
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%f",stats(tab,"min"));
    printf("\n%f",stats(tab,"max"));
    printf("\n%f",stats(tab,"median"));
    printf("\n%f",stats(tab,"mean"));
    return 0;
}