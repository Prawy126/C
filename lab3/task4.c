#include<stdlib.h>
#include<stdio.h>

/*Używając instrukcji break i continue napisz program który wypisze liczby od 0 do zadanej przez użytkownika wartości z pominięciem liczb podzielnych przez 3.*/

int main(){
    int n;
    printf("Prosze podac liczbe: ");
    scanf("%d",&n);

    for(int i = 0; i<n;i++){
        if(i%3==0){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}