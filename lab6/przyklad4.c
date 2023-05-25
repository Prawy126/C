#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Struktura pozwala na grupowanie wartości. W przeciwieństwie do tablicy pozwala na przechowywanie zmiennych różnych typów.
struct testStruct
{
    int age;
    float height;
    char name[20];
};


int main(int argc, char const *argv[])
{
    // Utworzenie zmiennej przechowującej strukturę i przypisanie wartości.
    struct testStruct strcVar ={30, 167.0, "Karol"};
    // dostęp do wartości zmiennej w strukturze
    printf("strcVar.age = %i\n", strcVar.age);
    // zmiana wartości zmiennej w strukturze
    strcVar.age = 40;
    printf("strcVar.age = %i\n", strcVar.age);
    
    // Jak wiadomo zmienne tablicowe przechowują wskaźnik na pierwszy element w tablicy stąd bezpośrednie przypisanie wartości w poniższy sposób jest niemożliwe
    // strcVar.name = "Leszek";

    // Do zmiany wartości można wykorztstać funkcje utworzone w poprzednim laboratorium lub skorzystać z biblioteki standardowej.
    strcpy(strcVar.name, "Leszek");
    printf("%s", strcVar.name);
    return 0;
}