#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *arv[])
{
    
    
   
  char name [10] = "michal";
  char surname[10]="pielcki";
   int age = 19; 
   int albumNumber = 124213;
   const float PI_VALUE  = 3.14;
   
   printf("name = %s,\n surname = %s,\n age = %d,\n album number = %d,\n pi value = %f", name, surname, age, albumNumber, PI_VALUE); 
   scanf("name = %s,\n surname = %s,\n age = %d,\n album number = %d,\n pi value = %f", name, surname, age, albumNumber, PI_VALUE); 
    return 0;
}