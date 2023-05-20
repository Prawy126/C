#include<stdlib.h>
#include<stdio.h>
//Napisz program delta.exe przyjmujący parametry a b c który wypisze w standardowym wyjściu wartość delty.
int main(){
    float a, b, c, delta;
    printf("Prosze podac wartosci a, b, c: ");
    scanf("%f, %f, %f",&a,&b,&c);
    delta = (b*b)-(4*a*b);
    printf("Delta wynosi: %f",delta);
    printf("%f %f %f",a,b,c);
    return 0;
}