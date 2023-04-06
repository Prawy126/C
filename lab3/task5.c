#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,i=0;
  printf("podaj liczbe: ");
  scanf("%d",&a);

  while (i<=a)
  {
    if(i%3==0)
    {
        i++;
        continue;
    }
    
    printf("%d\n",i);
    i++;
    
    
  }
  
    
    return 0;
}