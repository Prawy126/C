#include<stdlib.h>
#include<stdio.h>

/*Utwórz i przetestuj funkcję max_tab() która przyjmuje jako argument 10-elementową tablicę liczb całkowitych a następnie zwraca największy element tablicy.*/

int max(int tab[10]){
    int x = tab[0];
    for(int i = 1;i<10;i++){
        if(x < tab[i]){
            x = tab[i];
        }
    }
    return x;
}

int main(){
    int tab[10]={1,2,3,4,5,6,7,8,9,120};
    printf("%d",max(tab));
    return 0;
}