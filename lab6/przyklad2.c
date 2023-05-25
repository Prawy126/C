#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;
    // Jeśli a i b (iloczyn logiczny) - muszą zostać spełnione dwie reguły.
    // Warunek będzie spełniony tylko jeśli a i b będzie miało wartość true - 1.
    if (a && b)
    {
        printf("Wykonano a && b = %i\n", a&&b);
    }
    else
    {
        printf("Warunek a && b nie zostal spelniony = %i\n", a&&b);
    }

    // Jeśli a lub b (suma logiczna) - jeden z warunków musi mieć wartość true - 1.
    // Warunek będzie spełniony jeśli a lub b będzie true.
    if (a || b)
    {
        printf("Wykonano a || b = %i\n", a||b);
    }
    else
    {
        printf("Warunek a || b nie zostal spelniony = %i\n", a&&b);
    }

    return 0;
}