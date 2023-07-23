# C 
Lab 3

## Pytania

- W jaki sposób definiujemy tablice?
- Jak odczytać wartość z tablicy?
- Jak zmodyfikować wartość tablicy?
- Czym są tablice wielowymiarowe?
- Jak zbudowana jest pętla for?
- Jak zbudowana jest pętla while/do while?

## Przykłady
### Defioniowanie tablic jedno i [wielowymiarowych](https://cse.engineering.nyu.edu/~mleung/CS1114/s08/ch08/MDmemory.htm):

```c
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int array[3]; // Deklaracja tablicy o wielkości 3
    array[0] = 1; // Ustawienie kolejnych wartości w tablicy
    array[1] = 2;
    array[2] = 3;
    array[3] = 4; // Zachowanie "Undefined" ponieważ wykraczamy poza zakres tablicy. Wartość może ulegać zmianie w czasie działania systemu ponieważ program nie zarezerwował tego miejsca w pamięci.
     
    printf("Wielkość tablicy w bajtach: %i\n",sizeof(array));
    printf("Ponieważ wielkość int - %i bajtów razy wielkość tablicy - 3\n", sizeof(int));
    printf("array[0] = %i\n", array[0]);
    printf("array[1] = %i\n", array[1]);
    printf("array[2] = %i\n", array[2]);
    printf("array[3] = %i\n", array[3]); // poza zakresem zadeklarowanej tablicy
    printf("array[4] = %i\n", array[4]); // poza zakresem zadeklarowanej tablicy
    return 0;
}
```

Poniższy literał pozwala na zdefiniowanie tablicy o danej wielkości i przypisnanie odrazu wartości do kolejnych pól tablicy.

```c
int array[3] = {1,2,3};
```

Lub bez podawania wielkośći. Kompilator odczyta ją z literału deklarującego wartości.

```c
int array[] = {1,2,3};
```

Definiowanie tablicy wielowymiarowej(tablica w tablicy):

[[1,2,3],<br>
[4,5,6]]

```c
int main(int argc, char const *argv[])
{
    int array[2][3];
    // w tablicy o indeksie 0 jest tablica przechowująca tablicę int 3 elementową
    array[0][0] = 1; 
    array[0][1] = 2;
    array[0][2] = 3;
    // w tablicy o indeksie 1 jest tablica przechowująca tablicę int 3 elementową
    array[1][0] = 4; 
    array[1][1] = 5;
    array[1][2] = 6;
    return 0;
}
```

Definiowanie i przypisanie wartości tablicy wielowymiarowej.


```c
char chararray[3][2] = { {'a','b'},
                         { 'c','d' },
                         { 'e','f' } };

printf("%c",chararray[1][1]);
```




### Pętle

[for](https://learn.microsoft.com/pl-pl/cpp/c-language/for-statement-c?view=msvc-170)

[do-while](https://learn.microsoft.com/pl-pl/cpp/c-language/do-while-statement-c?view=msvc-170)

[while](https://learn.microsoft.com/pl-pl/cpp/c-language/while-statement-c?view=msvc-170)

`break` - przerywa działanie pętli.
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i<10;i++){
        if (i == 5){
            break;
        }
        printf("i = %i\n",i);
    }
    return 0;
}
```
W standardzie c99 nie można zadeklarować wartości w pętli jak w powyższym przykładzie.
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i<10;i++){
        if (i == 5){
            break;
        }
        printf("i = %i\n",i);
    }
    return 0;
}
```
`continue` - przechodzi do następnej iteracji.

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i<10;i++){
        if (i == 5){
            continue;
        }
        printf("i = %i\n",i);
    }
    return 0;
}
```
## Zadania

### Zadanie 1 - `task1.exe`
Utwórz program który przechowa dane następującej tabeli:
| 3.1 | 3.6 |
|-----|-----|
| 2.2 | 6.42|
| 3.1 | <mark>3.6</mark> |
| 3.5 | 32.6 |

Wypisz w konsoli zaznaczoną wartość używając indeksów.
Zmodyfikuj program tak by użytkownik mógł wskazać który element tablicy chce odczytać.

### Zadanie 2 - `forexcercise.exe`
Utwórz program który wypisuje liczby od 0 do 20.

Utwórz program który wypisuje liczby od 5 do 25.

Utwórz program który wypisuje liczby od 20 do 0.

Utwórz program który wypisuje począwszy od 1 co 3 kolejną liczbę do wartości 50.

Utwórz program który wypisuje 100 liczb podzielnych przez 5.

### Zadanie 3 - `printtable.exe`
Utwórz program który wypisze w konsoli tablicę z poprzedniego zadania wykorzystując pętlę w formacie:<br>
| 3.1&emsp;| 3.6&nbsp;&nbsp;&emsp;|<br>
| 2.2&emsp;| 6.42&emsp;|<br>
| 3.1&emsp;| 3.6&nbsp;&nbsp;&emsp;|<br>
| 3.5&emsp;| 32.6&emsp;|<br>

### Zadanie 4 - `task4.exe`
<!-- Utwórz program który w tablicy oddarray przechowuje 1000 kolejnych liczb parzystych za pomocą pętli for. Jaki rozmiar tablicy musisz ustawić by zabrakło pamięci? -->

Używając instrukcji break i continue napisz program który wypisze liczby od 0 do zadanej przez użytkownika wartości z pominięciem liczb podzielnych przez 3.

### Zadanie 5 - `otherloops.exe`
Spróbuj wykonać poprzednie zadanie za pomocą innej pętli(jeśli używałeś for za pomocą pętli `while` lub `do-while`).

### Zadanie 6 - `primenumbers.exe`
Utwórz program który wypisuje kolejne liczby pierwsze.*

### Zadanie 7 - `twodimensionarray.exe`
Napisz program który przechowuje w tablicy 3x3 wartości podane przez użytkownika. 

Dodaj do programu menu z następującymi opcjami:

1. Średnia z wybranej kolumny
2. Średnia z wybranego wiersza
3. Modyfikacja wybranej komórki
4. Wyjście z progrmau

Program ma działać dopóki użytkownik nie wybierze opcji 4. W przypadkach 1,2,3 ma umożliwiać użytkownikowi wybranie wiersza/koumny a następnie wykonywać odpowiednie obliczenia.


test sprawdzający wartość średniej
