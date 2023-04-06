#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 16;
int b = 5;
int result1 = a + b;
printf("Wynik działania 16 + 5 = %i\n",result1);

float c = 10;
float d = 4;
c = c / d;
printf("%i\n", c);
int e= 16;
int f = 5;
int result2 = e;
printf("result1 = %i\n",result2);
result2 += f;
printf("result1 += b = %i\n",result2);

    return 0;
}