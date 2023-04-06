#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int a = 5 , b = 5, c = 2;
    int delta ;
    
    printf("Podaj a:");
    scanf("%d", &a);
    printf("\nPodaj b");
    scanf("%d", &b);
    printf("\nPodaj c:");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);
    
    printf("delta wynosi %d", delta);
   
    return 0;

}