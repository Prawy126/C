#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
/*Wygeneruj wszystkie kombinacje dwu elementowe z powtórzeniami liczb 0 i 1: [0 0] [0 1] [1 0] [1 1]

Wypisz w konsoli metrycę logiczną gdzie a to pierwszy element z kombinacji natomiast b jest drugim elementem kombinacji:*/
int main(){
   bool a, b;
   printf("|a  |b  |~a|~b|a&&b |a||b  |\n");
   for(int i = 0;i<=1;i++){
    for(int j = 0; j<=1;j++){
        printf("|a  |b  ");
        if(a){
            printf("|1 ");
        }else{
            printf("|0 ");
        }
        if(b){
            printf("|1 ");
        }else {
            printf("|0 ");
        }
        if(b&&a){
            printf("|1    ");
        }else {
            printf("|0    ");
        }
        if(b||a){
            printf("|1    ");
        }else {
            printf("|0    ");
        }
        printf("|\n");
    }
    }
    return 0;
}