#include<stdlib.h>
#include<stdio.h>

/*Napisz funkcję swap() która przyjmuje wskaźniki do dwóch zmiennych typu float. Funkcja zamienia wartośći tych zmiennych.*/

void swap(float *a, float *b){
    float wynik = *a;
    *a = *b;
    *b = wynik;
}

int main(){
    float a = 1,  b = 3,*c=&a,*d=&b;
    swap(c,d); 
    printf("%f %f",a,b);
    return 0;
}