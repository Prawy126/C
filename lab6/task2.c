#include <stdio.h>
#include <stdlib.h>

int main()
{
  float waga,wzrost,BMI;
  printf("Podaj wzrost:");
  scanf("%f",&wzrost);
  printf("Podaj wage:");
  scanf("%f",&waga);
  printf("");

  BMI=waga/(wzrost*wzrost);

  if(BMI<16){
    printf("Wyglodzenie");
  }else if(BMI<17){
    printf("Wychudzenie");
  }else if(BMI<18.5){
    printf("Niedowaga");
  }else if(BMI<25){
    printf("Optimum");
  }else if(BMI<30){
    printf("Nadwaga");
  }else if(BMI<35){
    printf("Otylosc I");
  }else if(BMI<40){
    printf("Otylosc II");
  }else if(BMI>=40){
    printf("Otylosc III");
  }

  return 0;
}