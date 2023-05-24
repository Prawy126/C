#include<stdlib.h>
#include<stdio.h>

/*Napisz funkcję countwords() która wypisze ilość słów w łańcuchu znaków wedle zadanego separatora.*/
void countwords(){
    char przerwa, tab[10];
    printf("Prosze podac separator: ");
    scanf("%c", &przerwa);
    printf("Prosze podac ciag znakow: ");
    int wynik = 0;
    scanf("%s",tab);
    for(int i = 0;i<10;i++){
        if(tab[i]==przerwa){
            wynik++;
        }
    }
    printf("W %s zostalo podane %d wyrazow.",tab,wynik);
}

int main(){
    
    countwords();

    return 0;
}