# C
lab5 - Biblioteki standardowe

## Pytania

## Przykłady
### typy danych i ich limity - biblioteka <limits.h>
```c
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    // Typy całkowite
    // Integer - poniżej zdefiniowane wartośći całkowite przechowują taki sam zakres.
    puts("Integer");
    int i1 = INT_MAX;    // Biblioteka limits.h zawiera stałe np INT_MAX zawierające maksymalną wartość typu int
    signed i2 = INT_MIN; // Słówko kluczowe signed definiuje że typ może przechowywać dodatnie i ujemne wartości.
    int i3 = -32767;
    signed int i4 = 32767; // Typ integer nie powinien mieć problemów z przechowaniem liczb mniejszych od 32767(tego wymaga standard) jednak na różnych systemach maksymalne i minimalne przechowywane wartości mogą się różnić.
    printf("i1 = %d lub i1 = %i \n", i1, i1);
    printf("i2 = %d lub i2 = %i \n", i2, i2);
    printf("i3 = %d lub i3 = %i \n", i3, i3);
    printf("i4 = %d lub i4 = %i \n\n", i4, i4);

    // Long
    puts("Long");
    long l1 = LONG_MAX;
    long int l2 = LONG_MIN;
    signed long l3 = -2147483647;
    signed long int l4 = 2147483647;
    printf("l1 = %li lub i1 = %ld \n", l1, l1);
    printf("l2 = %li lub i2 = %ld \n", l2, l2);
    printf("l3 = %li lub i3 = %ld \n", l3, l3);
    printf("l4 = %li lub i4 = %ld \n\n", l4, l4);

    // Short
    puts("SHORT");
    short si1 = SHRT_MAX;
    short int si2 = SHRT_MIN;
    signed short si3 = -32767;
    signed short int si4 = 32767;
    printf("si1 = %hi lub si1 = %hd \n", si1, si1);
    printf("si2 = %hi lub si2 = %hd \n", si2, si2);
    printf("si3 = %hi lub si3 = %hd \n", si3, si3);
    printf("si4 = %hi lub si4 = %hd \n\n", si4, si4);

    // Long Long
    puts("Long Long");
    long long ll1 = LLONG_MAX;
    long long int ll2 = LLONG_MIN;
    signed long long ll3 = -9223372036854775807;
    signed long long int ll4 = 9223372036854775807;
    printf("ll1 = %lli lub ll1 = %lld \n", ll1, ll1);
    printf("ll2 = %lli lub ll2 = %lld \n", ll2, ll2);
    printf("ll3 = %lli lub ll3 = %lld \n", ll3, ll3);
    printf("ll4 = %lli lub ll4 = %lld \n\n", ll4, ll4);

    // Char
    puts("Char");
    char c1 = CHAR_MAX;
    char c2 = CHAR_MIN;
    signed char c3 = -128;
    signed char c4 = 127;
    char c5 = '\0'; // NULL
    printf("c1 = %c lub liczba odpowiadajaca znakowi c1 = %hhi\n", c1, c1);
    printf("c2 = %c lub liczba odpowiadajaca znakowi c2 = %hhi\n", c2, c2);
    printf("c3 = %c lub liczba odpowiadajaca znakowi c3 = %hhi\n", c3, c3);
    printf("c4 = %c lub liczba odpowiadajaca znakowi c4 = %hhi\n", c4, c4);
    printf("c5 = %c lub liczba odpowiadajaca znakowi c5 = %hhi\n\n", c5, c5);

    // Za pomocą słowa kluczowego unsigned możemy zdefiniować zmienne przechowujące wartości tylko dodatnie.
    puts("Unsigned int");
    unsigned u1 = UINT_MAX;
    unsigned int u2 = 0;
    unsigned int u3 = -1;
    printf("u1 = %u\n", u1);
    printf("u2 = %u\n", u2);

    puts("Unsigned char");
    unsigned char u4 = UCHAR_MAX;
    unsigned char u5 = 0;
    printf("u4 = %c lub liczba odpowiadajaca znakowi u4 = %hhu\n", u4, u4);
    printf("u5 = %c lub liczba odpowiadajaca znakowi u5 = %hhu\n", u5, u5);

    puts("Unsigned short");
    unsigned short u6 = USHRT_MAX;
    unsigned short int u7 = 0;
    printf("u6 = %hu\n", u6);
    printf("u7 = %hu\n", u7);

    puts("Unsigned long");
    unsigned long u8 = ULONG_MAX;
    unsigned long int u9 = 0;
    printf("u8 = %lu\n", u8);
    printf("u8 = %lu\n", u9);

    puts("Unsigned long long");
    unsigned long long u10 = ULONG_MAX;
    unsigned long long int u11 = 0;
    printf("u10 = %llu\n", u10);
    printf("u11 = %llu\n\n", u11);

    // Typy zmiennoprzecinkowe
    // Float
    puts("Float");
    float f1 = 3.14159265359;
    printf("f1 = %f lub zaokraglajac f1 = %.2f f1 = %.3f\n\n", f1, f1, f1);

    // Double
    puts("Double");
    double d1 = 3.14159265359;
    printf("d1 = %lf lub zaokraglajac d1 = %.2lf d1 = %.3lf\n\n", d1, d1, d1);


    // Long double
    puts("Long Double");
    double ld1 = 3.14159265359;
    printf("ld1 = %Lf lub zaokraglajac ld1 = %.2Lf ld1 = %.3Lf\n\n", ld1, ld1, ld1);

    return 0;
}
```

### Czas - [<time.h>](https://www.tutorialspoint.com/c_standard_library/time_h.htm)
```c
#include <time.h>
#include <stdio.h>
#include <unistd.h> // biblioteka zawiera funkcję sleep która wstrzymuje wykonanie programu o dany czas

int main(int argc, char const *argv[])
{
    // time()
    time_t time0 = 0;
    time_t timenow = time(NULL);
    printf("1 stycznia 1970 minelo = %ld sekund\n", time0);
    printf("Od 1 stycznia 1970 minelo = %ld sekund\n", timenow);

    // difftime()
    time_t time1 = time(NULL);
    sleep(2);
    time_t time2 = time(NULL);
    time_t timediff = difftime(time2,time1); // za pomocą funkcji difftime można obliczyć różnicę pomiędzy datami
    printf("time2 - time1 = %ld sekund\n", timediff);

    // ctime()
    char *timestring;
    timestring = ctime(&timenow);
    printf("data = %s",  timestring);

    // strftime() https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    struct tm *info;
    char data[80];
    info =  localtime(&timenow);
    strftime(data,80,"%A %d %B %Y", info);// funkcja zapisuje date w formacie łańcucha znaków do pierwszego argumentu. https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    printf("Data w zdefiniowanym formacie - |%s|\n", data );

    return 0;
}
```

### [<string.h>](https://www.tutorialspoint.com/c_standard_library/string_h.htm)

```c
#include <string.h> // Import biblioteki
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string1[] = "Ala ma ";
    char string2[] = "kota.";

    // Funkcja zwraca wskaźnik na pierwsze wystąpienie znaku.
    char *wsk;
    wsk = memchr(string1, 'a', 10);
    printf("adres na ktory wskazuje - %p , litera pod wskaznikiem - %c\n", wsk, *wsk);

    // porównanie dwóch ciągów znaków do zadanej długości przez porównanie bitów.
    char str1[] = "abc";
    char str2[] = "abc";
    char str3[] = "abd";
    int dec = memcmp(str1, str2, 3);
    int dec2 = memcmp(str1, str3, 3);
    printf("Czy abc == abc = %i, czy abc == abd = %i\n", dec, dec2);

    // Skopiowanie n znaków z łańcucha znaków do innego łańcucha(powinny mieć taką samą wielkość)
    char source[20] = "Ala ma kota.";
    char destination[20];
    // wyzerowanie wartości w zmiennej destination. Puste tablice przechowują symbol \0 który kryje się pod wartością char = 0.
    memset(destination, 0, 20);
    memcpy(destination, source, 10);
    printf("source = |%s| destination =|%s|\n", source, destination);
    
    // wyzerowanie wartości w zmiennej destination. Puste tablice przechowują symbol \0 który kryje się pod wartością char = 0.
    memset(destination, 0, 20);

    printf("wyczyszczona tablica |%s|\n", destination);
    // Takie samo działanie jak memcpy
    memmove(destination, source, 5);
    printf("source = |%s| destination =|%s|\n", source, destination);

    // Sprawdzenie długości tablicy
    unsigned long long len = sizeof(destination);
    printf("dlugosc tablicy - %Li \n", len);

    // połączenie łańcuchów znaków
    char source1[20] ="w jezyku C.";
    char destination1[20] ="Programowanie ";
    strcat(destination1, source1);
    printf("Polaczone lancuchy znakow |%s| \n", destination1);

    // porównanie łańcuchów znaków
    char str11[] = "ABC";
    char str22[] = "ABC ";
    int result = strcmp(str11,str22);
    printf("|%s| == |%s| = %i \n",str11, str22, result);
    result = strcmp(str11,str11);
    printf("|%s| == |%s| = %i \n",str11, str11, result);


    // wyszukuje pierwsze wystąpienie znaku i zwraca wskaźnik do tego znaku.
    char *wsk1;
    char str111[] = "Programowanie w C.";
    wsk1 = strchr(str111, 'C');
    printf("adres na ktory wskazuje - %p , litera pod wskaznikiem - %c\n", wsk1, *wsk1);

    // kopiowanie łańcucha znaków
    char source11[20] = "Programowanie w C.";
    char destination11[20];
    strcpy(destination11, source11);
    printf("source = |%s| destination =|%s|\n", source11, destination11);
    
    // sprawdzienie długości łańcucha znaków (nie wlicza \0)
    char str1111[200] = "Programowanie w jezyku C.";
    size_t x = strlen(str1111);
    printf("Dlugosc lancucha znakow - %Li.\n", x);

    // wyszukanie łańcucha znaków w innych łańcuchu i zwrócenie wskażnika na pierwszy element.
    char string[] = "Programowanie w jezyku C.";
    char needle[] = "mow";
    char *wsk11;
    wsk11 = strstr(string,needle);
    printf("%c",*wsk11);
    
    return 0;
}
```

### [<math.h>](https://cpp0x.pl/dokumentacja/standard-C/cmath-math-h/101)

```c
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x = 0.5;
    double y = 0.1;
    double result;

    printf("%.16lf \n", M_PI);

    // poniższe funkcje przyjmują i zwracają wartości wyrażone w radianach
    result = acos(x);
    printf("arc cos = %lf \n", result);

    result = asin(x);
    printf("arc sin = %lf \n", result);

    result = atan(x);
    printf("arc tangent = %lf \n", result);

    result = atan2(y, x); //https://en.wikipedia.org/wiki/Atan2
    printf("the angle θ between the ray to the point (x, y) and the positive x-axis = %lf \n", result);
   
    result = cos(x);
    printf("cosine = %lf \n", result);

    result =  sin(x);
    printf("sine = %lf \n", result);

    // eksponenta https://en.wikipedia.org/wiki/Exponential_function
    result = exp(x);
    printf("exp(%lf) = %lf \n",x, result);

    // logarytm naturalny https://en.wikipedia.org/wiki/Natural_logarithm
    result = log(x);
    printf("log(%lf) = %lf \n",x, result);

    // logarytm o podstawie 10
    result = log10(x);
    printf("log10(%lf) = %lf \n",x, result);

    // dzieli liczbę na części ułamkowe i całkowite
    double fraction, total;
    fraction = modf(x, &total);
    printf("frac part = %lf total part = %lf  \n",fraction, total);
    
    // podnoszenie liczby do potęgi.
    double a = 2, b = 4;
    result = pow(a, b);
    printf("%.0lf^%.0lf = %.0lf \n", a,b, result);

    // pierwiastek kwadratowy
    result = sqrt(x);
    printf("sqrt(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w górę.
    result = ceil(x);
    printf("ceil(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w dół.
    result =  floor(x);
    printf("floor(%lf) = %lf \n",x,  result);

    // wartość absolutna - pozbycie się minusa przy liczbie
    double c = -10.99;
    result = fabs(c);
    printf("fabs(%lf) = %lf \n",c,  result);

    // oblicza resztę z dzielenia dla liczb rzeczywistych (% dla liczb całkowitych)
    result = fmod(x, y);
    printf("fmod(%lf, %lf) = %lf \n",x,y,  result);
    return 0;
}
```
### <stdio.h> scanf()
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Wczytanie od użytkownika zmiennych różnych typów
    // pierwszy argumentt funkcji scanf() to format w postaci:
    // %[ilość znaków do wczytania][modyfikator typu np. l dla long][typ]
    int long i;
    printf("Podaj wartosc typu int: ");
    // zostaną wczytane tylko 4 występujące jako pierwsze po znaku spacji
    scanf("%4ld", &i);
    printf("i = %ld\n", i);

    unsigned char character;
    printf("Podaj wartosc typu char: ");
    // jeśli podamy zbyt wiele znaków dla poprzedniej instrukcji scanf wtedy kolejny znak będzie odczytany przez tą instrukcję.
    scanf(" %c", &character);
    printf("character = %c\n", character);
}
```

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[5];
    printf("Podaj wartosc: ");
    // Używając instrukcji scan f należy zachować ostrożność przy odczytywaniu łańcuchów znaków by nie przepełnić tablicy.
    scanf("%5s", string);
    printf("wartosc |%s|",string);

    // Znaki będą odczytywane tylko do spacji. wpisując "abc abc" do string przypisze się tylko abc
    return 0;
}
```

```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("Podaj wartosci a b c oddzielajac je znakiem spacji: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("a=%f b=%f c=%f", a ,b ,c);
    return 0;
}
```


## Zadania
### Zadanie 0
Przeanalizuj działanie przykładów.

### Zadanie 1 `task1.exe`
Za pomocą pętli wypisz wszystkie znaki char i odpowiadające im wartośći całkowite w następującej postaci:

```terminal
<0> = 48
```

*Zmodyfikuj program tak by wypisywał znaki w 3 kolumnach pomijając 9, 10, 11, 12 które zostaną wypisane na końcu.
```terminal
<☺> = 1          <V> = 86        <½> = 171
<☻> = 2          <W> = 87        <¼> = 172
...
```

### Zadanie 2 `task2.exe`
Napisz funkcję `radianToDegree()` oraz `degreeToRadian()` zamieniającą radiany na stopnie oraz stopnie na radiany. Funkcja powinna zwracać typ double.

$$
\alpha(rad) = \frac{\alpha(^\circ)*\pi}{180^\circ}
$$

$$
\alpha(^\circ) = \frac{\alpha(rad)* 180^\circ}{\pi}
$$

### Zadanie 3  `task3.exe`

Zadeklaruj zmienną `string` przechowującą łańcuch znaków o długości 200 znaków.
Wartość zmiennej podaje użytkownik. Wypisz informację o ilości znaków w zmiennej:
- z wykorzystaniem funkcji biblioteki standardowej.
- bez korzystania z biblioteki standardowej.

### Zadanie 4 `task4.exe`

Napisz funkcję `countwords()` która wypisze ilość słów w łańcuchu znaków wedle zadanego separatora.

*Napisz funkcję `countcharacters()` która wypisze informacje na temat ile w podanym jako parametr łańcuchu znaków znajduje się znaków specjalnych, cyfr, liter.

### Zadanie 5 `task5.exe`

Napisz funkcję `comparestr()` która w procentach określi podobieństwo dwóch łańcuchów znaków (takie same znaki na tej samej pozycji oznaczają podobieństwo).

Przetestuj funkcję na następujących danych:
```c
char str1[100] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
char str2[50] = "      ipsum dolor sit amet";
```

### Zadanie 6 `task6.exe`

Przetestuj działanie funkcji kopiującej łańcuch znaków z biblioteki standardowej. Następnie bez korzystania z bibliotek standardowych napisz funkcję `cpystr()` która kopiuje zawartość łańcucha znaków do innej zmiennej.

### Zadanie 7 `task7.exe`

Przetestuj działanie funkcji łączącej dwa łańcuchy znaków.
Napisz własną funkcję `catstr` łączącą dwa łańcuchy znaków.

Jeśli użytkownik będzie próbował połączyć dwa łańcuchy znaków tak że wykroczą one poza zakres zdefiniowanej tablicy program powinien wypisać komunikat a następnie zakończyć działanie korzystając z funkcji exit(EXIT_FAILURE) będącej częścią pakietu <stdlib.h>.

Przetestuj działanie funkcji. Napisz odpowiednie komentarze objaśniające co testuje dany przypadek.

### Zadanie 8 `task8.exe`

Napisz funkcję `findandreplace()` która w podanym jako parametr łańcuchu znaków szuka słowa podanego jako inny parametr a nastepnie zamienia na słowo podane jako kolejny parametr funkcji. Funkcja zwraca liczbę zmienionych słów.

np.
```c
findandreplace("aaa ccc bbbcccdddwww ccc", "ccc", "aaa")
```
zamieni "aaa ccc bbbcccdddwww ccc" na "aaa aaa bbbcccdddwww aaa" i zwróci wartość 2.


### Zadanie 9 `task9.exe`

Napisz program który wypisze wszystkie kombinacje z powtórzeniami 3 cyfrowe liczb 1, 2, 3, 4.

*Napisz funkcję która wypisze wszystkie kombinacje z powtórzeniami złożone z liczb zadanych przez użytkownika oraz zadanej przez użytkownika długości.
