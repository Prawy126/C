#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

// deklaracja struktury
struct numbers
{
int data[N]; // tablica przechowująca losowe liczby
};

int main()
{
struct numbers num; // deklaracja zmiennej typu strukturalnego "num"
srand(time(NULL)); // inicjalizacja generatora liczb losowych

// pętla wygenerująca i zapisująca 100 losowych liczb z przedziału od 1 do 10
for (int i = 0; i < N; i++)
{
num.data[i] = rand() % 10 + 1; // wygenerowanie losowej liczby z przedziału od 1 do 10
}

// wyświetlenie wygenerowanych liczb
for (int i = 0; i < N; i++)
{
printf("%d\n ", num.data[i]);
}

return 0;
}