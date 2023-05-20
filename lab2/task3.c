#include<stdlib.h>
#include<stdio.h>
/*Zapoznaj się z dokumentacją funkcji scanf() a następnie utwórz program który zapyta użytkownika o wartość liczy a, następnie wartość liczby b po czym wypisze sumę tych dwóch liczb.*/
int main(){
    int a,b,wynik;
    printf("Prosze podac pierwsza liczbe: ");
    scanf("%d",&a);
    printf("\nProsze podac druga liczbe: ");
    scanf("%d",&b);
    wynik=a+b;
    printf("Wynik: %d",wynik);
    
    return 0;
}