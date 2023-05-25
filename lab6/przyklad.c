#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int to float
    int a = 100;
    float x ,y;
    // konwersja niejawna(Implict) - kompilator sam przekonwertuje a na typ float.
    x= a;
    // konwersja jawna(Explict) - podajemy typ do jakiego chcemy przekonwertować zmienną.
    y = (float)a;
    printf("x=%f\n",x);
    printf("y=%f\n", y);

    // nie wszystkie konwersje są możliwe bez uproszczeń np. konwersja float na int ucina część ułamkową. Należy na to zwracać uwagę.
    double var1 = 0.1234546578;
    int dti = var1;
    printf("dti=%i", dti);

    return 0;
}