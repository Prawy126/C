#include<stdlib.h>
#include<stdio.h>

/*(Skopiuj kod z drugiego laboratorium gdzie należało wypisać swoje dane oraz dwóch osób obok. Wykorzystując funkcję zoptymalizuj kod tak by zajmował jak najmniej lini kodu.)

Napisz funkcję show() która przyjmuje imię i nazwisko a następnie wypisuje je w konsoli. Wywołaj funkcję podając jako argumenty swoje dane oraz dwóch osób obok.

Napisz funkcję suma() która zwraca sumę trzech liczb podanych jako argumenty funkcji.*/

void show(char imie[20], char nazwisko[20], int index){
    printf("imie:%s, nazwisko:%s, nr albumu: %d",imie,nazwisko,index);
}
float suma(float a, float b, float c){
    return a+b+c;
}

int main(){
    show("Michal","Pilecki",125151);
    printf("\n%f",suma(10,10,10));
    return 0;
}