#include<stdio.h>
#include<stdlib.h>


int main()
{
    int x;
    for(int i=0;i<21;i++)
    {
        printf("%d\n",i);
    }
    printf("\n");
    x=5;
    do{
        printf("%d\n",x);
        x++;
    }while(x<26);
    printf("\n");
    x=20;
    while (x>=0)
    {
        printf("%d\n",x);
        x--;
    }
    int c=0;
    for(int i=0;i<=100;i++)
    {
        printf("%d\n",c); 
        c=c+5;
    }
    

}