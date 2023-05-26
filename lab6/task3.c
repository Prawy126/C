#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*Utwórz strukturę patient przechowującą dane na temat pacjentów: Imię, nazwisko, wiek, pesel, wzrost, waga.

Utwórz tablicę przechowującą dane na temat 50 pacjentów. Wypełnij 5 pierwszych miejsc w tablicy danymi.

Utwórz funkcję showdata() która przyjmuja jako parametr strukturę patient i na podstawie danych oblicza BMI a następnie wypisuje w konsoli informacje na temat pacjenta w nastepującym formacie:*/

struct patient
{
    char imie[10];
    char nazwisko[10];
    int wiek;
    int pesel;
    float waga;
    float wzrost;
};

void showdata(struct patient p)
{
    float bmi = p.waga / ((p.wzrost / 100) * (p.wzrost / 100));
    printf("Imie: %s\n", p.imie);
    printf("Nazwisko: %s\n", p.nazwisko);
    printf("Wiek: %d\n", p.wiek);
    printf("PESEL: %d\n", p.pesel);
    printf("Waga: %.2f kg\n", p.waga);
    printf("Wzrost: %.2f cm\n", p.wzrost);
    printf("BMI: %.2f\n", bmi);
}
int main(){
    struct patient pacjent[50]={{"Adam", "Nowak", 39, 123123, 76.65, 1.86}, // Pacjent 1
        {"Ewa", "", 0, 0, 0.0, 0.0},   // Pacjent 2
        {"Jan", "Polak", 26, 1313213, 70, 1.77},   // Pacjent 3
        {"Anna", "Kowalska", 23, 2132131, 40, 1.57},  // Pacjent 4
        {"Michał", "Pilecki", 29, 1232131, 100, 1.78} // Pacjent 5
    };
    showdata(pacjent[3]);

    
    return 0;
}