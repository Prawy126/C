#include <stdio.h>
#include <stdlib.h>

typedef union myunion
{
    char a;
    int b;
    double c;
} shortname;

int main(int argc, char const *argv[])
{
    union myunion x; // deklaracja uni za pomocą pełnej definicji
    shortname x1; // seklaracja uni za pomocą krótkiej definicji

    x.a = 'a';
    x1.a = 'a';
    return 0;
}