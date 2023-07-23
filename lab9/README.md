# C

Lab9 - unie, dynamiczna alokacja pamięci.

## Pytania

- Czym jest enum?
- Czym różni się struktura od uni?
- W jaki sposób/ do czego możemy wykorzystać dynamiczne alokowanie pamięci?

## Przykłady

### Unie
Unie definiujemy za pomocą słówka kluczowego union:

```c
#include <stdio.h>
#include <stdlib.h>

union union_name {
    int a;
    char b;
    char c[5];
    struct asd{
        float d;
    } struct_name;
} Tmyname;

int main(int argc, char const *argv[])
{ 
    union union_name x = {4};
    printf("%d\n", x);
    x.b = 'd';
    printf("%c\n", x);  
    x.struct_name.d = 4.5;

    printf("Po zmianie ktoregos z pol struktury inne wartosci tez sa zmienione:\n");
    printf("x.a = %d", x.a);

    return 0;
}
```

Unie mają rozmiar równy największemu z przechowywanych typów. W pamięci wartości pól uni będą przechowywane we wspólnym bloku pamięci podczas gdy struktury będą miały zalokowane miejsca w pamieci dla poszczeólnych pól.

```c
#include <stdio.h>
#include <stdlib.h>

union myunion
{
    char a;
    int b;
    double c;
};

struct mystruct {
    char a;
    int b;
    double c;
};


int main(int argc, char const *argv[])
{
    union myunion myunion;
    struct mystruct mystruct;

    printf("ilosc bajtow ktore zajmuje unia = %i (max_zmienna=%i)\n", sizeof(myunion), sizeof(double));
    // Jeśli zmienne w strukturze posortujemy malejąco według zajmowanego miejsca w pamięci rozmiar struktury będzie mniejszy
    printf("ilosc bajtow ktore zajmuje struktura = %i (%i+%i+padding+%i)\n", sizeof(mystruct), sizeof(char), sizeof(int), sizeof(double));
    return 0;
}
```

Za pomocą słówna kluczowego typedef można zadeklarować krótką nazwę struktury lub uni.

```c
#include <stdio.h>
#include <stdlib.h>

typedef union myunion
{
    char a;
    int b;
    double c;
} shortname;

int main(int argc, char const *argv[])
{
    union myunion x; // deklaracja uni za pomocą pełnej definicji
    shortname x1; // seklaracja uni za pomocą krótkiej definicji

    x.a = 'a';
    x1.a = 'a';
    return 0;
}
```

### Enum

Typ wyniliczeniowy jest to struktura która może przyjmować pewne z góry ustalone wartości. Nazwy tych wartości zazwyczaj wskazują jakiś stan aplikacji lub nazwę obiektu która pozwala w czytelny sposób określic co dany kawąłek kodu robi. Pod daną nazwą kryje się liczba. Np. definicje kolorów w instrukcji switch czy menu.

```c
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef enum Color
{
    RED, // odpowiada liczbie 0
    GREEN, // odpowiada liczbie 1
    BLUE // odpowiada liczbie 2
} Color;

int main(int argc, char const *argv[])
{

    Color x = GREEN;

    switch (x)
    {
    case RED:
        printf("Wybrano czerwony");
        break;
    case GREEN:
        printf("Wybrano zielony");
        break;
    case 2: // Wartości tak naprawdę są liczbammi
        printf("Wybrano niebieski");
        break;
    default:
        break;
    }

    return 0;
}
```

### malloc i calloc

Funkcje malloc() i calloc() rezerwują w pamięci określoną ilość miejsca. Mijesce jest zwalniane po użyciu funkcji free()

```c
#include <stdio.h>
#include <stdlib.h>

int *alocateTabMalloc(int a)
{
    int rozmiar_tablicy = a * sizeof(int); // ilość elementów * rozmiar jednego elementu
    int *ptr = malloc(rozmiar_tablicy);
    return ptr;
}

int *alocateTabCalloc(int a)
{
    int *ptr = calloc(a, sizeof(int)); // alokuje określoną ilość w pamięci danego typu i ustawia wartości w pamięci na 0.
    return ptr;
}

int main(int argc, char const *argv[])
{
    int *tab = alocateTabMalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab[%d] = %d (poza tablica)\n", i, tab[i]);
            continue;
        }
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    int *tab2 = alocateTabCalloc(4); // utworzenie tablicy na 4 zmienne typu int
    for (size_t i = 0; i <= 5; i++)
    {
        if (i > 3)
        {
            printf("tab2[%d] = %d (poza tablica)\n", i, tab2[i]);
            continue;
        }
        printf("tab2[%d] = %d\n", i, tab2[i]);
    }

    // kopiuje wskaźnik do tablicy tab2
    int *ptr2 = tab2;
    // zwalniam pamięć
    free(tab2);
    // Wypisuję zawartość pamięci
    for (size_t i = 0; i <= 5; i++)
    {
        printf("ptr2[%d] = %d (zwomnione miejsce)\n", i, ptr2[i]);
    }

    return 0;
}
```

## Zadania

Chcemy utworzyć tablicę która przyjmuje wartości różnego typu. Następnie funkcję która będzie wypisywała zawartość tablicy.

### Zadanie 1

Utwórz typ wyliczeniowy `var_type` zawierający wartości INT, FLOAT, CHAR.

### Zadanie 2

Utwórz struktórę `var` która będzie przechowywać typ zmiennej. Oraz wartość zmiennej. Typ zmiennej jest typem wyliczeniowym natomiast na przehcoywanie wartoścu utwórz unie o typach takich jak w poprzednim zadaniu.

### Zadanie 3

Utwórz funckję `setInt()` `setFloat()` `setChar()` które przyjmują dwa arumenty, wskaźnik do zmiennej `var` i wartość zmiennej. Funkcje ustawiają odpowienio wartości zmiennej var.

### Zadanie 4

Utwórz tablicę zawierającą 10 wartości typu `var`.
Wypełnij tablicę wartości najpierw liczbami od 1 do 10.
Wypełnij tablicę wartościami A, B, C, D ...

### Zadanie 5

Utwóz funkcję varToString() która zwraca wskaźnik do łańcucha znaków. Np. jeśli var przechowuje wartość 100 to varToString() pwoinna zwrócić wskaźnik na tablicę przechowującą napis "100". Wykorzystaj funkcję [`sprintf()`](https://www.tutorialspoint.com/c_standard_library/c_function_sprintf.htm)

### Zadanie 6

Wypisz zawartość tablic wykorzystując stworzone funkcje.
