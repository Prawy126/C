#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#define TBA_LEN 20; //różnica polega na tym że wartość tej zmiennej można zmienić a stałej nie można zienić
double potegowanie;

struct funkcjakwadratowa
{
    int a, b, c, x1 ,x2;
    bool delta;

};

int main()
{
    int a=10;
    printf("wartosc a=%d\n",a);
    int *b;
    b=&a;
    printf("adres b=%p\n",b);
    *b=20;
    printf("wartosc a teraz wynosi %d",*b);
    printf("\n%d=a",a);
        return 0;
}
