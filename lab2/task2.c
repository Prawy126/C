#include<stdlib.h>
#include<stdio.h>

int main(){
    int a = 16, b = 5, result1 = a + b;
    printf("Wynik dzialania %d + %d = %d",a,b,result1);

    float c = 10;
    float d = 4;
    float wynik;
    wynik = c / d;
    printf("\nWynik dzialania %.1f/%.1f=%.1f",c,d,wynik);
    a+=b;
    c/=d;
    printf("Wyniki skroconych operatorow: %d, %f",a,c);
    return 0;
}