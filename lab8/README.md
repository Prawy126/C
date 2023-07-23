# C
lab8 - Operacje na plikach

## Pytania
- Jak otworzyć plik w trybie zapisu, jak w trybie odczytu, jak w trybie dodawania nowej treści?
- W jaki sposób sprawdzić rozmiar pliku a w jaki ilość znaków w pliku?
- Czym jest kursor?

## Przykłady
https://pl.wikibooks.org/wiki/C/fopen
https://pl.wikibooks.org/wiki/C/fclose

https://pl.wikibooks.org/wiki/C/fputs
https://pl.wikibooks.org/wiki/C/perror
https://pl.wikibooks.org/wiki/C/puts

https://cpp0x.pl/dokumentacja/standard-C/fseek/344
https://cpp0x.pl/dokumentacja/standard-C/ftell/471

https://pl.wikibooks.org/wiki/C/scanf


### Otwarcie pliku i odczytanie różnych typów danych różnymi metodami
zawartość pliku file1.txt
`321 Programowanie 3.14 4.52`
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *in = fopen("files/file1.txt", "r");    // otwiera plik do odczytu (plik musi istniec)
    printf("wskaznik na pierwszy adres w pamieci gdzie zpaisany jest odczytany z dysku plik: %p\n",in);
    if (in == NULL)
    {
        perror("Nie udalo sie otworzyc pliku.");
        return 1;
    }

    // funkcja fseek() zmienia pozycję kursora (kursor pokazuje ile bitów lub znaków zostało odczytane - zależy to trybu odczytu pliku)
    // Stała SEEK_END wskazuje koniec pliku.
    fseek(in, 0, SEEK_END); 

    // Funkcja ftell() zwraca aktaulną pozycję kursora - dzięki temu możemy odczytać ilość znaków w pliku lub wielkość pliku w binarnym trybie odczytu.
    long size = ftell(in);
    printf("Aktualna pozycja kursora: %li\n",size);

    // SEEK_SET wskazuje na poczatek pliku
    fseek(in, 0, SEEK_SET); 
    size = ftell(in);
    printf("Aktualna pozycja kursora(SEEK_SET): %li\n",size);

    // Podczas używania funkcji fscanf() i podobnych pozycja kursora będzie się zmieniać.
    int a;
    char b[50];
    fscanf(in, "%i %s", &a, &b); // funkcja fscanf() odczytuje pewną ilość znaków i ustawia kursor na ostatnim odczytanym
    size = ftell(in); // sprawdzamy pozycję kursora
    printf("Aktualna pozycja kursora: %li\n",size);
    fseek(in, 0, SEEK_SET); // ustawiamy pozycję kursora na początkową

    // fscanf() - skanuje w poszukiwaniu wzorca i przypisuje wzorce do zmiennych
    int x1;
    char x2[30];
    float x3;
    double x4;
    int charNumber = fscanf(in, "%i %s %f %lf", &x1, x2, &x3, &x4); // <--------------------------
    printf("%i %s %f %f \n", x1, x2, x3, x4);
    fclose(in);
    
    
    // fgets() - odczytuje wskazaną ilość znaków aż do napotkania znaku \n  lub wczytania ostatniego znaku podanego jako argument funkcji
    in = fopen("files/file1.txt", "r");
    char readedText[101];
    char restult[100];
    fgets(readedText , 30 , in ); // <--------------------------
    printf("%s\n", readedText);
    fclose(in);

    // fgetc() - odczytuje jeden znak z pliku - zwraca kod asci tego znaku
    in = fopen("files/file1.txt", "r");
    char readedChars[40];
    for(int i=0;i<40;i++){
        readedChars[i] = fgetc(in); // <--------------------------
    }
    printf("%s", readedChars);
    fclose(in);

    return 0;
}

```
### Zapis do pliku tekstowego
```c
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *out = fopen("files/file2.txt", "w");

    // fprintf()
    int x1 = 321;
    float x2 = 3.21;
    double x3 = 42.32;
    char x4 = 'f';
    char x5[] = "abcd";
    fprintf(out, "%d\n", x1);
    fprintf(out, "%f\n", x2);
    fprintf(out, "%lf\n", x3);
    fprintf(out, "%c\n", x4);
    fprintf(out, "%s\n", x5);

    // fputs()
    char y1[] = "efgh";
    fputs(y1, out);
    fputs("\nijklm",out);

    fclose(out);
    /* code */
    return 0;
}
```

## Zadania

### Zadanie 1
Napisz program `task1` który utworzy plik `file.txt` zawierający napis "1 Bike 432".

```
1 Bike 432
```

### Zadanie 2

#### Ad. 1
Napisz program `task2` który do pliku `file.txt` doda kolejną linijkę "2 Monitor 200".

```
1 Bike 432
2 Monitor 200
```

#### Ad. 2
Przy kolejnych uruchomieniach programu plik `file.txt` powinien dopisywać kolejne wiersze "2 Monitor 200". np. po 3 uruchomieniach plik powinien wyglądać tak.
```
1 Bike 432
2 Monitor 200
2 Monitor 200
2 Monitor 200
```
Zmodyfikuj program aby sprawdzał czy linijka z numerem "2." istnije. Jeśli tak nie modyfikuj pliku, jeśli nie istnieje nadpisz plik.

### Zadanie 3
Napisz program `task3` który wypisze zawartość pliku `file.txt`. Następnie poprosi o podanie nazwy przedmiotu oraz ceny przez użytkownika, dopisze je do pliku po czym wypisze jego nową zawartość i zakońćzy działanie. Przy kolejnych uruchomieniach program powienien sam generować kolejne numerki przedmiotów.

```
Zawartosc pliku:
1 Bike 432
2 Monitor 200

Dodaj nowy przedmiot:
nazwa: Helmet
cena: 376

Zawartosc pliku:
1 Bike 432
2 Monitor 200
3 Helmet 376
```

### Zadanie 4
Napisz program `file_stat` który wypisze liczbę znaków w pliku `file.txt`.
Rozbuduj program aby wyświetlał liczbę linii w pliku.
Rozbuduj program tak aby wypisywał rozmiar pliku wyrażony w kB lub Bajtach.

### Zadanie 5
Utwórz pliki `utils.c`. W pliku utwórz funkcję `filetoarray(char *path)` która odczyta dane z pliku którego nazwa przekazana jest przez parametr path. W funkcji utwórz tablicę zdolną przechować cały plik (można wykorzystać funkcję malloc()). Następnie wypełnij tablicę danymi z pliku.
Funkcja powinna zwrócić wskaźnik do wypełnionej tablicy.

Przetestuj działanie funkcji na pliku `file.txt` i wypisz rezultat w konsoli (zawartość tablicy zwróconej przez funkcję `filetoarray()`).

### Zadanie 6
plik csv (comma-separated values) jest to plik gdzie wartości są oddzielone przecinkiem.
Pobierz plik iris.data z archiwum uci https://archive.ics.uci.edu/ml/machine-learning-databases/iris/
Informacje zawarte w pliku:
- kolumna 1 - długość kielicha w cm
- kolumna 2 - szerokość kielicha w cm
- kolumna 3 - długość płatka w cm
- kolumna 4 - szerokość płatka w cm
- kolumna 5 - gatunek:
    - Iris Setosa
    - Iris Versicolour
    - Iris Virginica

Napisz program `podziel` który odczyta dane z pliku iris.data a nastepnie odczyta 80% danych z każdego gatunku i zapisze je do pliku `train.csv`.
Pomocna będzie funkcja fgetc() dzięki której możliwe będzie sprawdzenie czy odczytano już znak ','.

Resztę danych zapisz do pliku `test.csv` (pozostałe 20% z każdego gatunku).

### Zadanie 7
Utwórz program `test.c` a w nim:
- Utwórz strukturę `iris_row` która będzie przechowywać dane z jednego wiersza iris.data.
- Utwórz funkcję `load_data()` która przyjmuje wskaźnik na tablicę zawierajacą łańcuch znaków będący ścieżką do pliku.`load_data(char *path)`
    - Funkcja wczytuja dane z pliku przekazanego w parametrze path. Dane z wierszy są zapisywane w strukturze `iris_row`
    - Struktury są przechowywane w tablicy.
    - Funkcja zwraca wskaźnik do tablicy zawierającej dane.

### Zadanie 8
Napisz program `kalkulator` który będzie posiadał opcje dodawania, odejmowania, mnożenia, dzielenia, potęgowania i obliczania pierwiastka stopnia drugiego z liczby. Kalkulator powinien zapisywać historię wykonywanych działań do pliku `log.txt`.
