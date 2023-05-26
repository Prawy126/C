#include <stdio.h>
#include <math.h>

/*Napisz funkcję obliczającą miejsca zerowe funkcji kwadratowej. Uwzględnij że funkcja może zwracać zero, jedną lub dwie wartości. W komentarzach opisz działanie funkcji, argumenty jakie przyjmuje oraz zaprezentuj działanie na wybranych przykładach.*/

struct MiejscaZerowe {
    int liczbaMiejscZerowych;
    float x1;
    float x2;
};

struct MiejscaZerowe obliczMiejscaZerowe(float a, float b, float c) {
    struct MiejscaZerowe miejscaZerowe;

    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        miejscaZerowe.liczbaMiejscZerowych = 2;
        miejscaZerowe.x1 = (-b + sqrt(delta)) / (2 * a);
        miejscaZerowe.x2 = (-b - sqrt(delta)) / (2 * a);
    } else if (delta == 0) {
        miejscaZerowe.liczbaMiejscZerowych = 1;
        miejscaZerowe.x1 = -b / (2 * a);
        miejscaZerowe.x2 = miejscaZerowe.x1;
    } else {
        miejscaZerowe.liczbaMiejscZerowych = 0;
    }

    return miejscaZerowe;
}

int main() {
    float a, b, c;

    printf("Podaj wspolczynniki a, b, c dla funkcji kwadratowej (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);

    struct MiejscaZerowe wynik = obliczMiejscaZerowe(a, b, c);

    if (wynik.liczbaMiejscZerowych == 0) {
        printf("Funkcja nie ma miejsc zerowych.\n");
    } else if (wynik.liczbaMiejscZerowych == 1) {
        printf("Jedno miejsce zerowe: x = %.2f\n", wynik.x1);
    } else {
        printf("Dwa miejsca zerowe: x1 = %.2f, x2 = %.2f\n", wynik.x1, wynik.x2);
    }

    return 0;
}
