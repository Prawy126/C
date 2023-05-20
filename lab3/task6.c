#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/*Utwórz program który wypisuje kolejne liczby pierwsze.*/

int main(){
    bool wynik = false;
    for(int i = 4; i<100;i++){
        for(int j = 1;j<i;j++){
            if((i%j==0 )&& (j == 1 || j == i)){
                wynik = true;
            }else {
                wynik = false;
                break;
            }
            //do poprawy ten watunek
        }
        if(wynik == true){
            printf("%d jest liczba pierwsza\n",i);
        }
    }

    return 0;
}