#include <stdio.h>

// przed nazwą funkcji podajemy typ jaki powinna zwrócić
// Funkcje mogą mieć wiele argumentów różnego typu
int nazwa_funkcji(int argument1, int argument2){
    // Ciało funkcji - zestaw instruckji
    int wynik = argument1 + argument2;
    return wynik; // return kończy działanie funkcji i zwraca wynik. 
}

// funkcja może nie przyjmować argumentów i nie zwracać wartości
void hello(){
    printf("Hello World!\n");
    // return; // Możliwe jest przerwanie działania funkcji za pomocą return bez wartości
}

int main(int argc, char const *argv[])
{
    hello();
    int wynik = nazwa_funkcji(4,2); // wywołanie funkcji odbywa się przez podanie nazwy funkcji oraz jej argumentów w ()
    printf("%i",wynik);
    return 0;
}