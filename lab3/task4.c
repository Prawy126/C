#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a;
  printf("podaj liczbe: ");
  scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        printf("%d",i);
    }
    return 0;
}