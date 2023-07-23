# C
lab4 - funkcje i wskaźniki

## Pytania

## Przykłady
### [Funkcje](https://pl.wikibooks.org/wiki/C/Funkcje)

```c
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
```

### Funkcje z nieograniczoną liczbą argumentów.

```c
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
```


### [Wskaźniki](https://pl.wikibooks.org/wiki/C/Wska%C5%BAniki)
### Definiowanie zmiennych wskaźnikowych
```c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr; // deklaracja zmiennej przechowującej adres w pamięci. (wskaźnik)

    char a = 'a';

    printf("Wartosc przechowywana przez zmienna a: %c\n", a);

    // Za pomocą operatora &nazwa_zmiennej można odczytać adres komórki w pamięci.
    // !Adres jest w formacie szesnastkowym, należy użyć odpowiedniego typu funkcji printf() aby go wypisać poprawnie.
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p\n", &a);

    ptr = &a; // Przypisanie adresu zmiennej a dla zmiennej wskaźnikowej
    
    printf("Wartosc zmiennej a znajduje sie pod adresem: %p \n", ptr);
    // Aby odczytać wartość znajdującą się pod danym adresem używamy operatora wyłuskania "*"
    printf("Wartosc przechowywana pod adresem przechowaynym przez wskaznik %c\n", *ptr);

    // Zmiana wartości za pomocą wskaźnika
    *ptr = 'b';
    printf("Nowa wartosc zmiennej a: %c",a);

    return 0;
}
```

:warning: Przy definiowaniu wskażników uważaj na opercję przypisania:
```c
int a = 55;

int *ptr_a = &a;
```

```c
int a = 55;

int *ptr_a;
*ptr_a = &a; // w ten sposób zmienisz wartość pod danym adresem.
```
### Tablice
Zmienne tablicowe wskazują pierwszy adres w tablicy.

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char tab[20];

    char *ptr_tab = tab;
    printf("Adres pierwszego elementu tablicy (tab[0]): %p\n", *ptr_tab);
    printf("Wartosc: (tab[0]): %c \n", tab[0]);
    printf("Wartosc za pomoca wskaznika: (tab[0]): %c\n", *ptr_tab);
    /* code */
    return 0;
}
```
### Iteracja  tablicy za pomocą wskaźników

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int TAB_SIZE = 20;
    char tab[20] = "abcdefghijklmnoprst";

    // char *ptr_tab = tab - inicjalizacja wskaźnika i przypisanie mu adresu pierwszego elementu tablicy
    // warunekt ograniczający *ptr_tab nie potrzebuje operatora porównania ponieważ jeśli trafimy na koniec tablicy otrzymamy wartość 0(false)
    // warunek zwiększenia licznika pętli zwiększa licznik na kolejny adres w pamięci
    for (char *ptr_tab = tab; *ptr_tab; ptr_tab++)
    {
        printf("Wartosc: %c \n", *ptr_tab);
    }
    return 0;
}
```


## Zadania

### Zadanie 1 - `task1.exe` i `task1.c`
(Skopiuj kod z drugiego laboratorium gdzie należało wypisać swoje dane oraz dwóch osób obok. Wykorzystując funkcję zoptymalizuj kod tak by zajmował jak najmniej lini kodu.)

Napisz funkcję `show()` która przyjmuje imię i nazwisko a następnie wypisuje je w konsoli.
Wywołaj funkcję podając jako argumenty swoje dane oraz dwóch osób obok.

Napisz funkcję `suma()` która zwraca sumę trzech liczb podanych jako argumenty funkcji.

### Zadanie 2 - `task2.exe` i `task2.c`
Utwórz i przetestuj funkcję `max_tab()` która przyjmuje jako argument 10-elementową tablicę liczb całkowitych a następnie zwraca największy element tablicy.

### Zadanie 3 - `task3.exe` i `task3.c`
Utwórz i przetestuj funkcję `mean()` która jako argument przyjmuje 10-elementową tablicę liczb całkowitych a następnie zwraca średnią z tablicy.

### Zadanie 4 - `stats.exe` i `stats.c`
Korzystając z dokumentacji biblioteki [string.h](https://cpp0x.pl/dokumentacja/standard-C/cstring-string-h/609) utwórz i przetestuj funkcję `stats()` która jako argument przyjmuje 10-elementową tablicę liczb całkowitych oraz łańcuch znaków który w zależności od przechowywanej zmiennej sprawi że funkcja zwróci inną wartość:
- `min` - minimalną wartość z tablicy
- `max` - maksymalną wartość z tablicy
- `median` - medianę z tablicy
- `mean` - średnią z tablicy

### Zadanie 5 - `task5.exe` i `task5.c`
Utworzyć funkcję `mystdev()` która może przyjmować rózne liczby parametrów liczb zmienno przecinkowych i zwraca średnią argumentów.
Zmodyfikuj funkcję tak by zwracała odchylenie standardowe (zapoznaj się z dokumentacją biblioteki [math.h](https://cpp0x.pl/dokumentacja/standard-C/cmath-math-h/101) i wyszukaj odpowiednie funkcje) przekazanych argumentów według wzoru: 
$$
\sigma = \sqrt{\frac{1}{N}\sum_{n=1}^{N}(x_i - \overline{x})^2}
$$ 
gdzie 
$$
\overline{x}=\frac{1}{N}\sum_{i=1}^{N}x_i
$$

### Zadanie 6
Utwórz tablicę liter od a do z. Za pomocą wskaźników wypisz literę f.

### Zadanie 7 - `task7.exe` i `task7.c`
Utwórz tablicę liter od a do z. Utwórz pętlę w której za pomocą wskaźników wypiszesz co n-ty element(zdefiniowany przez użytkownika) tej tablicy począwszy od 'c'.

### Zadanie 8 - `swap.exe` i `swap.c`
Napisz funkcję `swap()` która przyjmuje wskaźniki do dwóch zmiennych typu float. Funkcja zamienia wartośći tych zmiennych.


## Dodatkowe przykłady
### Znalezienie wskaznika na liczbę w tablicy.
Zadaniem jest znalezienie wskaźnika na element w 2 wierszu a 3 kolumnie a następnie zmiana wartośći tego elementu.
```c
#include <stdio.h>
#include <stdlib.h>
#define N 321

void printtab(int tab[3][3])
{
    printf("Tablica:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", tab[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int asd[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *wskfor6;
    for (int *ptr_tab = asd; *ptr_tab; ptr_tab++)
    {
        if (*ptr_tab == 6)
        {
            wskfor6 = ptr_tab;
            printf("%p\n", ptr_tab);
            break;
        }
    }

    printtab(asd);

    *wskfor6 = 999;

    printtab(asd);

    return 0;
}
```


lub

```c

#include <stdio.h>
#include <stdlib.h>
#define N 321

void printtab(int tab[3][3])
{
    printf("Tablica:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", tab[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int asd[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *wskfor6;
    
    wskfor6 = &asd[1][2];

    printtab(asd);

    *wskfor6 = 99;

    printtab(asd);

    return 0;
}
```


### Funkcje redukują ilość kodu.
```c
#include <stdio.h>
#include <stdlib.h>

// zmienna globalna
int asd = 10;

void show(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%i ", i);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    show(10);
    show(20);
    show(30);


    // bez użycia funkcji kod mógł wyglądać następująco:
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    for (int i = 0; i < 30; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    printf("Wartosc zmiennej globalnej %i",asd);
    return 0;
}
```


###

```c

#include <stdio.h>
#include <stdlib.h>

int max_tab(int tab[])
{
    printf("Tablica tab ma wielkosc - %i elementy\n", sizeof(tab));
    int max_elem = tab[0];
    for (size_t i = 0; i < sizeof(tab); i++)
    {
        if (max_elem < tab[i])
        {
            max_elem = tab[i];
        }
    }
    return max_elem;
}

int main(int argc, char const *argv[])
{
    int x[] = {1, 23, 4, 6};
    int b = max_tab(x);
    printf("Maksymalny element w tablicy x to %i", b);
    return 0;
}

```

Task 5
```c
#include <stdio.h>
#include <stdarg.h> // Wymagana jest biblioteka w której zadeklarowane są użyte funkcje va_start, va_end
#include <math.h>

double odchstd(int argc, ...){ // w argc przechowuje liczbę argumentów
    va_list arg; // specjalny typ do przechowywania argumentów
    va_start(arg, argc); // rozpoczęcie odczytu

    //  stała która będzie przechowywać rozmiar tablicy równy ilości argumentów.
    const int N = argc;
    // inicjalizazcja tablicy zdolnej przechować N argumentów
    double tab[N];
    
    // Odczytuje kolejne elementy i dodaje do tablicy.
    for (int i = 0; i<argc; i++) { // va_arg(arg, int) odczytuje argumenty danego typu
        tab[i] = va_arg(arg,double);
    }
    va_end(arg); // zakończenie odczytu

    // obliczenie średniej
    double srednia = 0;
    for(int j = 0; j< argc; j++){
        srednia += tab[j];
    }
    srednia = srednia/argc;

    // obliczenie odchylenia
    double odchstd = 0;
    for (int i = 0; i < argc; i++)
    {
        double roznica = tab[i] - srednia;
        odchstd += roznica*roznica;
    }
    odchstd = odchstd/argc;
    odchstd = sqrt(odchstd); 
    
    return odchstd;
}

int main(int argc, char const *argv[])
{
    double wynik = odchstd(4, 1.0, 2.0, 3.0, 4.0);
    printf("odchylenie standardowe wynosi: %lf", wynik);
    return 0;
}
```



Task 7
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // utworzenie tablicy z literami od a do z (na 27 znaków poeniważ ostatni element będzie wskazywać na symbol pusty \0 - koniec łańcucha znaków)
    char tab[27];
    int x = 97;
    for (size_t i = 0; i < 26; i++)
    {
        tab[i] = x;
        x = x+1 ;
    }
    printf("%s", tab);

    printf("co ktory element wypisac:");
    int n;
    scanf("%i", &n);
    // Jeśli zinkrementujemy wskaźnik o 2 dostaniemy wskaźnik na 3 element tablicy
    // zwiększając wskaźnik ptr_tab o n przegapimy znak \0 zatem w pętli należy przeskakiwać co nty krok
    int counter = n-1;
    for (char *ptr_tab = tab+2; *ptr_tab; ptr_tab++)
    {
        // Zwiększamy licznik iteracji o 1
        counter++;
        // Jeśli mamy już n-ta literę wypisujemy informacje i zerujemy licznik
        if (counter == n)
        {
            printf("Wartosc: %c \n", *ptr_tab);
            counter = 0;
        } 
    }
    
    return 0;
}
```

swap

```c
#include <stdio.h>

// z użyciem dodatkowej zmiennej
void swap(float *a, float*b){
    // ustawiam zmienna pomocniczą w której przechowam wartość a
    float temp = *a;
    // zapisuje pod adresem przechowywanym przez a wartość zmiennej spod adresu b
    *a = *b;
    // zapisuje pod adresem przechowywanym przez b wartość zmiennej a przechowywanej w temp
    *b = temp;
}

// bez dodatkowej zmiennej
void swap2(float *a, float*b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main(int argc, char const *argv[])
{
    float a = 4.0;
    float b = 9.0;

    swap(&a, &b);

    printf("dzialanie swap a = %f b=%f\n", a,b);

    swap2(&a,&b);
    printf("dzialanie swap2 a = %f b=%f", a,b);
    return 0;
}
```
