#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 30;

    // używając () można określić kolejność wykonywania warunków.
    if( (a >= 0 && a <= 10 ) || (a >= 30 && a <= 40 )){
        printf("Zmienna a jest z zakresu [0, 10] lub [30, 40]");
    }

    return 0;
}