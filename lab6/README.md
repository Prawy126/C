# C
Rzutowanie, spójniki logiczne i struktury

## Pytania

## Przykłady
### Rzutowanie
```c
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
```

### Operatory logiczne
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;
    // Jeśli a i b (iloczyn logiczny) - muszą zostać spełnione dwie reguły.
    // Warunek będzie spełniony tylko jeśli a i b będzie miało wartość true - 1.
    if (a && b)
    {
        printf("Wykonano a && b = %i\n", a&&b);
    }
    else
    {
        printf("Warunek a && b nie zostal spelniony = %i\n", a&&b);
    }

    // Jeśli a lub b (suma logiczna) - jeden z warunków musi mieć wartość true - 1.
    // Warunek będzie spełniony jeśli a lub b będzie true.
    if (a || b)
    {
        printf("Wykonano a || b = %i\n", a||b);
    }
    else
    {
        printf("Warunek a || b nie zostal spelniony = %i\n", a&&b);
    }

    return 0;
}
```

Operatory logiczne można łączyć
```c
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 30;

    // używając () można określić kolejność wykonywania warunków.
    if( (a >= 0 && a <= 10 ) || (a >= 30 && a <= 40 )){
        printf("Zmienna a jest z zakresu [0, 10] lub [30, 40]");
    }

    return 0;
}
```

### Struktury

```c
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
```

Strktury można wykorzystać do zwrócenia kilku wartości przez funkcję.
```c
struct rectangle
{
    float x;
    float y;
};

struct rectangle createrect(float x, float y){
    struct rectangle kw;
    kw.x = x;
    kw.y = y;
    return kw;
}

int main(){
    struct rectangle kw = createrect(10.2, 20.4);
    printf("x=%f, y=%f", kw.x,kw.y);
}
```


## Zadania
### Zadanie 1 `task1.exe`
Wygeneruj wszystkie kombinacje dwu elementowe z powtórzeniami liczb 0 i 1:
[0 0]
[0 1]
[1 0]
[1 1]

Wypisz w konsoli metrycę logiczną gdzie `a` to pierwszy element z kombinacji natomiast `b` jest drugim elementem kombinacji:
```terminal
|a  |b  |~a|~b|a&&b |a||b  |
|---|---|--|--|-----|------|
|0  |0  |1 |1 |0    |0     |
|0  |1  |1 |0 |0    |1     |
|1  |0  |0 |1 |0    |1     |
|1  |1  |0 |0 |1    |1     |
```

<details>
<summary></summary>

Kombinacje dwóch liczb wygenerować można w taki sam sposób jak przeglądając dwu wymiarową tablicę o wymiarach 2x2.

</details>

### Zadanie 2 `task2.exe`
Utwórz kalkulator BMI w którym użytkownik podaje swoją wagę oraz wzrost a następnie wypisana zostaje informacja według następujących przedziałów:<br>
![](https://www.zikodlazdrowia.org/wp-content/uploads/2020/06/bmi-scale_ziko_dla_zdrowia.png)

$$
BMI = \frac{kg}{m^2}
$$
kg - masa ciała w kilogramach
m - wzrost w metrach

### Zadanie 3 `Task3.exe`

Utwórz strukturę `patient` przechowującą dane na temat pacjentów: Imię, nazwisko, wiek, pesel, wzrost, waga.

Utwórz tablicę przechowującą dane na temat 50 pacjentów. Wypełnij 5 pierwszych miejsc w tablicy danymi.

Utwórz funkcję `showdata()` która przyjmuja jako parametr strukturę `patient` i na podstawie danych oblicza BMI a następnie wypisuje w konsoli informacje na temat pacjenta w nastepującym formacie:

```terminal
Jan Kolwaski 35 lat 180cm 90kg - nadwaga
```
Wypisz dane na temat pacjentów.

<details>
<summary>Podpowiedź</summary>

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct patients
{
    char name[20];
    char surname[20];
    int age;
};


int main(int argc, char const *argv[])
{
    // deklarując zmienną tablicową nie wiemy jakie wartości przechowuje aktualnie tablica
    struct patients tab[50];


    struct patients p1 = {"Jan", "Kowalski", 25};
    struct patients p2 = {"Jan", "Kowalski", 35};
    struct patients p3 = {"Jan", "Kowalski", 45};
    struct patients p4 = {"Jan", "Kowalski", 55};
    struct patients p5 = {"Jan", "Kowalski", 65};
    
    tab[0] = p1;
    tab[1] = p2;
    tab[2] = p3;
    tab[3] = p4;
    tab[4] = p5;
    
    // Ustawiamy na sztywno wartość 5 ponieważ wiemy że w kolejnych polach są losowe dane.
    for (size_t i = 0; i < 5; i++)
    {
        printf("%s %s %i\n", tab[i].name, tab[i].surname, tab[i].age);
    }
    
    
    return 0;
}
```

</details>

<details>
<summary>Podpowiedź v2</summary>

```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct patients
{
    char name[20];
    char surname[20];
    int age;
};


int main(int argc, char const *argv[])
{
    char imiona[5][20] = {"Jan", "Karol", "Zbigniew", "Leszek", "Adam"};
    char nazwiska[5][20] = {"Kowalski", "Nowak", "Rak", "Mickiewicz", "Wokulski"};
    // deklarując zmienną tablicową nie wiemy jakie wartości przechowuje aktualnie tablica
    struct patients tab[50];
    printf("imie zaraz po zadeklarowaniu tablicy - |%s|\n", tab[0].name);

    // Zatem dobrze jest wyczyścić dane zaraz po zadeklarowaniu by móc sprawdzić czy pole w tablicy jest puste czy nie.
    for (size_t i = 0; i < (sizeof(tab)/sizeof(struct patients)); i++) // sizeof() zwraca ilość bajtów jaką zajmuje zmienna. Jeśli podzielimy tą wielkość przez rozmiar typu jaki przechowuje tablica otrzymamy rozmiar tablicy.
    {
        // funkcja mem set ustawi wartości w tablicy znaków na '\0'
        memset(tab[i].name, 0, sizeof(tab[i].name));
        memset(tab[i].surname, 0, sizeof(tab[i].surname));
        // aby wyzerować wiek wystarczy ustawić wartość na 0
        tab[i].age = 0;
    }
    
    // wstawiamy 5 losowych pacjentów do tablicy
    for (size_t i = 0; i < 5; i++)
    {
        struct patients temppatient;
        char surname[20];
        char name[20];

        // losuje imie z tablicy
        int x = (rand()%5);
        // kopiuje wylosowane imie do zmiennej pomocniczej
        strcpy(name,imiona[x]);
        // prypisuje do struktury
        strcpy(temppatient.name,name);
        // printf("wylosowane imie : %s\n", name);

        // losuje nazwisko z tablicy nazwiska
        x = (rand()%5);
        // kopiuje wylosowane imie do zmiennej pomocniczej
        strcpy(surname, nazwiska[x]);
        // przypisuje do struktury
        strcpy(temppatient.surname,surname);
        // printf("wylosowano nazwisko: %s\n", surname);

        // losuje wiek. Dodaje 10 aby pacjent miał minimum 10 lat ponieważ funkcja rand zwraca wartości od 0 do INT_MAX
        int wiek = (rand()%90 + 10);
        temppatient.age = wiek;
        // przypisuje strukture do pola tablicy
        tab[i] = temppatient;
    }

    for (size_t i = 0; i < (sizeof(tab)/sizeof(struct patients)); i++)
    {
        // jeśli w tablicy pole name jest puste pomiń je
        if(*tab[i].name == '\0'){
            continue;
        }
        printf("%s \t %s \t %i \n", tab[i].name, tab[i].surname, tab[i].age);
    }
    

    
    return 0;
}
```

</details>

### Zadanie 4 `mytime.exe`

Utwórz strukturę `date` przechowującą: rok, miesiąc, numer dnia w miesiącu, godzinę, liczbę minut, liczbę sekund.

Funkcja `time(0)` z biblioteki <time.h> zwraca obecną datę w postaci "timestamp" (liczba sekund od 1 stycznia 1970) https://www.epochconverter.com/
Napisz funkcję `timestamptodate()` która zamieni czas w sekundach liczbę lat, miesięcy, dni ... sekund i zapisze te dane w strukturze `date`.

Napisz funkcję `datetotimestamp()` która dokona odwrotnej konwersji na podstawie przekazanej struktury `date`.

Utwórz funkcję `showtime()` przyjmującą format np. "YYYY MM DD HH:MM:SS" a nastepnie wypisującą w konsoli obecną datę w formacie zdefiniowanym przez parametr format. Obsłuż minimum możliwość zdefiniowania użytkownikowi formatu dnia, miesiąca i roku.

yy - wyświetla dwie cyfry roku np. 22
yyyy - wyświetla pełny rok np. 2022
m - wyświetla pojedynczą cyfrę oznaczającą miesiąc np. 3
mm - wyświetla dwie cyfry oznaczające miesiąc np. 03
mmm - wyśeitla 3 znaki oznaczające miesiąc np. mar
mmmm - wyświetla pełną nazwę miesiąca np. march
d - wyświetla pojedynczą cyfrę oznaczającą dzień 4
dd - wyświetla dwie cyfry oznaczające dizeń np. 04

Utwórz funkcję `printtime()` która działa podobnie jak funkcja `showtime()` z tą różnicą że nie przyjmuje parametrów lecz format jest zdefiniowany w stałej globalnej DATE_FORMAT.

Utwórz funkcję `isbetweendates()` która przyjmuje 3 daty i zwraca jeden jeśli data podana jako pierwszy argument znajduje się w okresie pomiędzy pozostałymi dwoma argumentami. 0 w przeciwnym przypakdu.


### Zadanie 5 `task5.exe`

Napisz funkcję obliczającą miejsca zerowe funkcji kwadratowej. Uwzględnij że funkcja może zwracać zero, jedną lub dwie wartości. W komentarzach opisz działanie funkcji, argumenty jakie przyjmuje oraz zaprezentuj działanie na wybranych przykładach.

<details>
<summary>Podpowiedź </summary>

```c
#include <stdio.h>
#include <stdlib.h>

// Napisać funkcję która oblicza x = a+5 oraz y = a+10
// sposob 1
void obliczxy(int a,int *x,int *y){
    *x = a+5;
    *y = a+10;
};

// sposob 2
struct xy
{
    int x;
    int y;
};

struct xy obliczxy2(int a)
{
    struct xy result;
    result.x = a+5;
    result.y = a+10;
    return result;
};

// sposob 3
int * obliczxy3(int a){
    // słowo kluczowe static sprawia że zmienna result będzie widoczna poza funkcją.
    static int result[2];
    result[0] = a+5;
    result[1] = a+10;
    return result;
};

int main(int argc, char const *argv[])
{
    int x,y;
    obliczxy(5, &x, &y);
    printf("Wartosc przy a=5 - x=%i y=%i\n", x,y);

    struct xy res = obliczxy2(5);
    printf("Wartosc przy a=5 - x=%i y=%i\n", res.x,res.y);

    int *wsk = obliczxy3(5);
    printf("Wartosc przy a=5 - x=%i y=%i\n", wsk[0],wsk[1]);
    printf("Wartosc przy a=5 - x=%i y=%i\n", *wsk,*(wsk+1));

    return 0;
}
```

</details>
