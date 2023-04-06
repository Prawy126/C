#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;
    a = 0;
    printf("Od 0 do 20\n");
    for(int i = 0; i<=20; i++)
    {
        
        printf("%d\n", a);
        a++;
    }
    printf("Od 5 do 25\n");
    a = 5;
    for(int i = 0; i<=20; i++)
    {
        printf("%d\n", a);
        a++;
    }
    a = 20;
     printf("Od 20 do 0\n");
    for(int i = 0; i<=20; i++)
    {
        
        printf("%d\n", a);
        a--;
    }
    a = 1;
     printf("Od 1 do 50 co 3\n");
    for(int i = 1; i<=17; i++)
    {
        
        printf("%d\n", a);
        a +=3;
    }
    a = 0;
    int licz = 1;
     printf("100 liczb podzielnych przez 5\n");
    for(int i = 1; i<=100; i++)
    {
        
        printf("%d) %d\n",licz, a);
        a +=5;
        licz++;
    }
}