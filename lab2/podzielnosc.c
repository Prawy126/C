#include <stdio.h>

int main()
{
    int var1, var2;

    printf("podzielnosc");
    printf("\nPodaj liczbe: ");
    scanf("%lf",&var1);
    var2 = var1/2;
    if(var1-var2==0)
    {
     printf("Liczba jest podzielna przez 2");
      scanf("liczba nie jest podzielna przez 2");
    }else{
      printf("liczba nie jest podzielna przez 2");
      scanf("liczba nie jest podzielna przez 2");
    }
   
    return 0;
}