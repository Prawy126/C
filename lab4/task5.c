#include <stdio.h>
#include <stdarg.h>
#include <math.h>

/*Utworzyć funkcję mystdev() która może przyjmować rózne liczby parametrów liczb zmienno przecinkowych i zwraca średnią argumentów. Zmodyfikuj funkcję tak by zwracała odchylenie standardowe (zapoznaj się z dokumentacją biblioteki math.h i wyszukaj odpowiednie funkcje) przekazanych argumentów według wzoru:*/

double mystdev(int n, ...) {
    va_list args;
    va_start(args, n);

    double sum = 0.0;
    double sum_squared = 0.0;

    for (int i = 0; i < n; i++) {
        double value = va_arg(args, double);
        sum += value;
        sum_squared += value * value;
    }

    va_end(args);

    double mean = sum / n;
    double variance = (sum_squared / n) - (mean * mean);
    double standard_deviation = sqrt(variance);

    return standard_deviation;
}

int main() {
    double result = mystdev(5, 1.0, 2.0, 3.0, 4.0, 5.0);
    printf("Standardowe odchylenie: %lf\n", result);

    return 0;
}
