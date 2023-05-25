#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Utwórz kalkulator BMI w którym użytkownik podaje swoją wagę oraz wzrost a następnie wypisana zostaje informacja według następujących przedziałów:*/

int main() {
    double waga, wzrost, bmi;
    printf("Prosze podac wage: ");
    scanf("%lf", &waga);
    printf("Prosze podac wzrost: ");
    scanf("%lf", &wzrost);
    bmi = waga / pow(wzrost, 2);
    
    if (bmi < 16) {
        printf("Wyglodzony");
    } else if (bmi < 17) {
        printf("Wychudzenie");
    } else if (bmi < 18.5) {
        printf("Niedowaga");
    } else if (bmi < 25) {
        printf("Optimum");
    } else if (bmi < 30) {
        printf("Nadwaga");
    } else if (bmi < 35) {
        printf("Otylosc I");
    } else if (bmi < 40) {
        printf("Otylosc II");
    } else {
        printf("Otylosc III");
    }
    
    return 0;
}
