#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*Napisz funkcję radianToDegree() oraz degreeToRadian() zamieniającą radiany na stopnie oraz stopnie na radiany. Funkcja powinna zwracać typ double.*/

double radianToDegree(double alfa){
    double wynik;
    wynik = (alfa * 180)/3.14;

    return wynik;
}

double degreeToRadian(double alfa){
    double wynik;
    wynik = (alfa * 3.14)/180;
    return wynik;
}

int main(){
    printf("stopnie:%lf",radianToDegree(3.14/4));
    printf("radiany:%lf",degreeToRadian(45));

    return 0;
}