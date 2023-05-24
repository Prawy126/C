#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[5];
    printf("Podaj wartosc: ");
    // Używając instrukcji scan f należy zachować ostrożność przy odczytywaniu łańcuchów znaków by nie przepełnić tablicy.
    scanf("%5s", string);
    printf("wartosc |%s|",string);

    // Znaki będą odczytywane tylko do spacji. wpisując "abc abc" do string przypisze się tylko abc
    return 0;
}