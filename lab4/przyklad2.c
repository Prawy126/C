#include <stdio.h>
#include <stdarg.h> // Wymagana jest biblioteka w której zadeklarowane są użyte funkcje va_start, va_end

int suma(int argc, ...){ // w argc przechowuje liczbę argumentów
    va_list arg; // specjalny typ do przechowywania argumentów
    va_start(arg, argc); // rozpoczęcie odczytu
    for (int i = 0; i<argc; i++) { // va_arg(arg, int) odczytuje argumenty danego typu
      printf("%i\n",va_arg(arg,int));
    }
    va_end(arg); // zakończenie odczytu
    return 1;
}

int main(int argc, char const *argv[])
{
    suma(4, 1,2,3,5);
    return 0;
}