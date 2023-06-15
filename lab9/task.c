#include<stdlib.h>
#include<stdio.h>

/*Zadanie 1
Utwórz typ wyliczeniowy var_type zawierający wartości INT, FLOAT, CHAR.

Zadanie 2
Utwórz struktórę var która będzie przechowywać typ zmiennej. Oraz wartość zmiennej. Typ zmiennej jest typem wyliczeniowym natomiast na przehcoywanie wartoścu utwórz unie o typach takich jak w poprzednim zadaniu.

Zadanie 3
Utwórz funckję setInt() setFloat() setChar() które przyjmują dwa arumenty, wskaźnik do zmiennej var i wartość zmiennej. Funkcje ustawiają odpowienio wartości zmiennej var.

Zadanie 4
Utwórz tablicę zawierającą 10 wartości typu var. Wypełnij tablicę wartości najpierw liczbami od 1 do 10. Wypełnij tablicę wartościami A, B, C, D ...

Zadanie 5
Utwóz funkcję varToString() która zwraca wskaźnik do łańcucha znaków. Np. jeśli var przechowuje wartość 100 to varToString() pwoinna zwrócić wskaźnik na tablicę przechowującą napis "100". Wykorzystaj funkcję sprintf()

Zadanie 6
Wypisz zawartość tablic wykorzystując stworzone funkcje.*/

typedef enum var_type{
    INT,
    FLOAT,
    CHAR
} var_type;

struct var
{
    var_type i;
};

union unia
{
    int a;
    float b;
    char c;
};


void setInt(var_type *wsk,int wartosc){
    *wsk=wartosc;
}
void setChar(var_type *wsk,char wartosc){
    *wsk=wartosc;
}void setFloat(var_type *wsk,float wartosc){
    *wsk=wartosc;
}
//zawiecha nad zadaniem 5 
char* varToString(struct var var){
    return ;
}

int main(){

    struct var var1[10];
    for (size_t i = 0; i < 10; i++)
    {
        var1[i].i=i;
    }
    var1[0].i='A';
    var1[1].i='B';
    var1[2].i='C';
    printf("%d",var1[5].i);
    return 0;
}