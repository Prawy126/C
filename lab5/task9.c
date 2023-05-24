#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/*Napisz program który wypisze wszystkie kombinacje z powtórzeniami 3 cyfrowe liczb 1, 2, 3, 4.

*Napisz funkcję która wypisze wszystkie kombinacje z powtórzeniami złożone z liczb zadanych przez użytkownika oraz zadanej przez użytkownika długości.*/

int main(){
    bool pomoc = true;
    int a = 0, b = 0,c = 0; 
    while(pomoc){
        if(c<4){
            printf("%d%d%d\n",a,b,c);
            c++;
            continue;
        }else if(b<4){
            printf("%d%d%d\n",a,b,c);
            b++;
            c = 0;
            continue;
        }
        else if(a<4){
            printf("%d%d%d\n",a,b,c);
            a++;
            b = 0;
            c = 0;
            continue;
        }else {
            pomoc = false;
        }
    }

}