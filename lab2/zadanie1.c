#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[]) // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    char string[20]; // utworzenie zmiennej string która przechowuje 20 zmiennych char do których odwołujemy się po indeksach.
    string[0] = 'H'; // przypisanie do pierwszego zarezerwowanego adresu litery 'H'
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = ' ';
    string[6] = 'C';
    printf("%c", string[6]); // Wypisanie znaku na 7 miejscu w tablicy.
    printf("%s",string);
    scanf("%s",string);
    return 0;
}