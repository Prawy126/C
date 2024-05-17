# Generator haseł
Napisz funkcję `genPassword()` która przyjmuje 3 parametry: ilośc liter w haśle, ilość cyfr w haśle, ilość znaków specjalnych w haśle.

<details>
<summary>
Tablica ASCII
</summary>
ASCII code 33 = ! <br>
ASCII code 34 = " <br>
ASCII code 35 = # <br>
ASCII code 36 = $ <br>
ASCII code 37 = % <br>
ASCII code 38 = & <br>
ASCII code 39 = ' <br>
ASCII code 40 = ( <br>
ASCII code 41 = ) <br>
ASCII code 42 = * <br>
ASCII code 43 = + <br>
ASCII code 44 = , <br>
ASCII code 45 = - <br>
ASCII code 46 = . <br>
ASCII code 47 = / <br>
ASCII code 48 = 0 <br>
ASCII code 49 = 1 <br>
ASCII code 50 = 2 <br>
ASCII code 51 = 3 <br>
ASCII code 52 = 4 <br>
ASCII code 53 = 5 <br>
ASCII code 54 = 6 <br>
ASCII code 55 = 7 <br>
ASCII code 56 = 8 <br>
ASCII code 57 = 9 <br>
ASCII code 58 = : <br>
ASCII code 59 = ; <br>
ASCII code 60 = < <br>
ASCII code 61 = = <br>
ASCII code 62 = > <br>
ASCII code 63 = ? <br>
ASCII code 64 = @ <br>
ASCII code 65 = A <br>
ASCII code 66 = B <br>
ASCII code 67 = C <br>
ASCII code 68 = D <br>
ASCII code 69 = E <br>
ASCII code 70 = F <br>
ASCII code 71 = G <br>
ASCII code 72 = H <br>
ASCII code 73 = I <br>
ASCII code 74 = J <br>
ASCII code 75 = K <br>
ASCII code 76 = L <br>
ASCII code 77 = M <br>
ASCII code 78 = N <br>
ASCII code 79 = O <br>
ASCII code 80 = P <br>
ASCII code 81 = Q <br>
ASCII code 82 = R <br>
ASCII code 83 = S <br>
ASCII code 84 = T <br>
ASCII code 85 = U <br>
ASCII code 86 = V <br>
ASCII code 87 = W <br>
ASCII code 88 = X <br>
ASCII code 89 = Y <br>
ASCII code 90 = Z <br>
ASCII code 91 = [ <br>
ASCII code 92 = \ <br>
ASCII code 93 = ] <br>
ASCII code 94 = ^ <br>
ASCII code 95 = _ <br>
ASCII code 96 = ` <br>
ASCII code 97 = a <br>
ASCII code 98 = b <br>
ASCII code 99 = c <br>
ASCII code 100 = d <br>
ASCII code 101 = e <br>
ASCII code 102 = f <br>
ASCII code 103 = g <br>
ASCII code 104 = h <br>
ASCII code 105 = i <br>
ASCII code 106 = j <br>
ASCII code 107 = k <br>
ASCII code 108 = l <br>
ASCII code 109 = m <br>
ASCII code 110 = n <br>
ASCII code 111 = o <br>
ASCII code 112 = p <br>
ASCII code 113 = q <br>
ASCII code 114 = r <br>
ASCII code 115 = s <br>
ASCII code 116 = t <br>
ASCII code 117 = u <br>
ASCII code 118 = v <br>
ASCII code 119 = w <br>
ASCII code 120 = x <br>
ASCII code 121 = y <br>
ASCII code 122 = z <br>
ASCII code 123 = { <br>
ASCII code 124 = | <br>
ASCII code 125 = } <br>
ASCII code 126 = ~ <br>
</details>

Funkcja wypisuje w konsoli losowo wygenerowane hasło zawierające określoną ilość znaków. np. 3 litery 2 cyfry 1 znak specjalny
```
A4?yH0
```
Pozycja liter, cyfr oraz znaków specjalnych jest losowa.

W metodzie `main()` zaimplementuj menu:
```
1. Generuj nowe haslo.
2. Wyjście z programu.
```
Program powinien działać do momentu wybrania opcji wyjście z programu.
Po wybraniu opcji Generuj nowe haslo użytkownik pytany jest o ilość liter w haśle, ilość cyfr w haśle oraz ilosć znaków specjalnych. Po wprowadzeniu danych hasło jest wyświetlane w konsoli. Przykładowa sesja:

```

1. Generuj nowe haslo.
2. Wyjście z programu.
Wybierz opcje: 1
Ile liter: 1
Ile cyfr: 1
Ile znakow specjalnych: 1
z!4

1. Generuj nowe haslo.
2. Wyjście z programu.
Wybierz opcje: 1
Ile liter: 2
Ile cyfr: 0
Ile znakow specjalnych: 2
*a#Z

1. Generuj nowe haslo.
2. Wyjście z programu.
Wybierz opcje: 2

Zakońćzenie działania programu.
```
# Macierze
Utwórz program `db_macierzodleglosci`.

Napisz funkcję `allocate_2d_array()` która dynamicznie alokuje miejsce w pamięci na macierz liczb zmiennoprzecinkowych o rozmiarze przekazanym jako parametry funkcji. Funkcja zwraca wskaźnik na tę macierz.

Napisz funkcję `free_2d_array()` która zwalnia miejsce w pamięci macierzy przekazanej jako parametr funkcji.
W komentarzu opisz za co odpowiadają parametry funkcji jeśli ich nazwa tego nie sugeruje.

Napisz funkcję `print_matrix()` która wypisuje w konsoli zawartość macierzy w następującej postaci:

```terminal
| 0.00      | 0.10      |
| 1.00      | 4331.10   |
| 2.00      | 42.10     |
```

Utwórz funkcję `euclidDistance()` która przyjmuje dwie tablice o dowolnej długości jako parametry funkcji. Funkcja oblicza odległość Euklidesową na podstawie wartości tablic według wzoru:

$$
d(p,q)=\sqrt{\sum_{i=1}^{n}\left(q_{i}-p_{i}\right)^2} 
$$

Utwórz funkcję `distnaceMatrix()` która oblicza odległości pomiędzy kolejnymi wierszami macierzy przekazanej jako parametr funkcji i wpisuje do nowej macierzy obliczone wartości. np. mając macierz:

```
| 0.00      | 0.00      |
| 0.00      | 1.00      |
| 0.00      | 2.00      |
```

wynikiem działania będzie macierz 3x3 gdzie w komórce [1,1] jest odległośc pomiędzy 1 a 1 wierszem,w komórce [1,2] odległość pomiędzy 1 a 2 wierszem, w komórce ...
w komórce [3,3] odległośc pomiędzy 3 a 3 wierszem:

```
| 0.00      | 1.00      | 2.00      |
| 1.00      | 0.00      | 1.00      |
| 2.00      | 1.00      | 0.00      |
```

W metodzie main() utwórz następujące menu:

```
1. Wprowadz macierz
2. Wyswietl macierz
3. Macierz odleglosci
4. Wyjscie
```

Po wybraniu opcji 1 program pyta użytkownika o rozmiar macierzy, alokuje miejsce na tę macierz a następnie użytkownik wypełnia macierz danymi.

```
Wybrano 1 - Wprowadz macierz.
Wprowadz liczbe wierszy: 2
Wprowadz luczbe kolumn: 2
tab[1][1] = 1
tab[1][2] = 3
tab[2][1] = 3
tab[2][2] = 2
```

Po wybraniu opcji 2 program wyświetla macierz za pomocą funkcji print_matrix()

Po wybraniu opcji 3 program wyświetla macierz odległości macierzy przechowywanej aktualnie w pamięci.

Program powinien działać aż do momentu wybrania opcji wyjście. Pamięć powinna być zwalniana w odpowiednim momencie.

# Palindrom
Utwórz program `dst_palindrom`.

Utwórz funkcję `checkPalindrom()` która przyjmuje łańcuch znaków(**tablica** znaków zakończona pustym znakiem). Funkcja zlicza ile znaków jest na właściwej pozycji by utworzyć palindrom(słowo czytane od przodu i od tyłu brzmiące tak samo) i zwraca tę liczbę. Jeśli łańcuch znaków jest palindromem wtedy zwraca liczbę liter w słowie. np.

- **ala** zwróci liczbę 3
- **kajak** - 5 znaków
- **k**b**j**a**k** - 3 znaki
- **abba** - 4 znaki
- b**bb**a - 2 znaki


W metodzie `main()` napisz program który sprawdza działanie funkcji na poniższych przykładach:
```
"kajak" funkcja ma zwrócić 5
"Ala alA" funkcja ma zwrócić 7
" zrzegorz " funkcja ma zwrócić 6
"  ala  " funkcja ma zwrócić 7
```

W dalszej części metody `main()` po wyświetleniu przypadków testowych dopisz fragment który będzie pytał użytkownika o wybranie opcji z poniższego menu:
```
1. Wprowadź słowo.
2. Wyjście z programu.
```
Program powinien działać do momentu wybrania opcji wyjście z programu.
Po wybraniu opcji wprowadź słowo, odczytywane jest słowo wprowadzone od użytkownika (maksymalnie 100 znaków). Następnie program sprawdza czy znaki wprowadzone przez użytkownika są palindromem za pomocą utworzonej funkcji i wypisuje rezultat. Przykładowa sesja:

```
"kajak" - 5 palindrom
"Ala alA" - 7 palindrom
" zrzegorz " - 6
"  ala  " - 7 palinfrom

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 1
Wprowadz slowo: alaska
alaska - 2

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 1
Wprowadz slowo: ala
ala - 3 palindrom

1. Wprowadz slowo.
2. Wyjscie z programu.
Wybierz opcje: 2

Zakońćzenie działania programu.
```
# Mnożenie macieży
Utwóz program `bdb_mnozeniemacierzy`

1. Utwórz strukturę `Array` przechowującą dynamicznie alokowaną macierz dwuwymiarową liczb zmiennoprzecinkowych. Struktura powinna zawierać dane o wielkości macierzy.

2. Utwórz funkcję `initArray()` która zwraca instancję struktury `Array`. Funkcja tworzy nową instancję struktury `Array` i przechowuje macierz o określonej **liczbie wierszy i kolumn przekazanych jako parametry funkcji**. Domyślnie macierz jest wypełniona wartościami 0.

3. Utwórz funkcję `freeArray()` która przyjmuje jako parametr **wskaźnik do struktury Array**. Funkcja dealokuje miejsce przechowujące dynamicznie przydzielone miejsce na macierz. Jeśli wszystko przebiegnie pomyślnie **funkcja zwraca wartość true**.

4. Utwórz funkcję `fillArray()` która wypełnia macierz wartościami podanymi przez użytkownika. Przed wprowadzeniem wartości użytkownik powinien otrzymać następujący komunikat informujący którą komórkę uzupełnia.

```
[1][1] = 1
[1][2] = 2
[2][1] = 1
[2][2] =
```

4. Utwórz funkcję `printArray()` która przyjmuje jako parametr strukturę `Array`.
Funkcja wypisuje zawartość macierzy w następującym formacie:

```terminal
2.000        2.000        2.000
2.000        2.000        2.000
12.000       12.000       12.000
```

5. Utwórz funkcję `multiplyArrays()` przyjmującą dwie instancje struktury `Array`. W ciele funkcji zaimplementuj mnożenie macierzy według wzoru:

$$
C_{ij} = \Sigma_{k=1}^{p} A_{ik} B_{kj}
$$

Metoda zwraca nową strukturę `Array` będącą wynikiem mnożenia przekazanych macierzy.

Uwzględnij nastepujące aspekty:
- kiedy możliwe jest mnożenie macierzy przez macierz, jeśli mnożenie nie jest możliwe wypisz odpowiedni komunikat i zwróć puste pola struktury `Array`(dwie macierze można pomnożyć tylko wtedy gdy liczba kolumn macierzy A jest równa liczbie wierszy macierzy B).

6. W metodzie `main()`:
- Za pomocą funkcji `initArray()` utwórz macierze o wymiarach 3x2 oraz 2x3. Wypełnij macierze poniższymi wartościami(są to przypadki testowe i powinny być zainicjowane w programie **bez ingerencji użytkownika**)

```
1.00    2.00    3.00
4.00    5.00	2.00
```
```
1.00	4.00
3.00	1.00
5.00	4.00
```

Pomnóż zainicjowane macierze za pomocą utworzonej metody. Wynik mnożenia zapisz w pliku `wynik.txt`:
```
1.00    2.00    3.00
4.00    5.00	2.00

X

1.00	4.00
3.00	1.00
5.00	4.00

=

22.00	18.00
29.00	29.00
```

Utwórz menu umożliwiające uzytkownikowi stworzenie dwóch macierzy, wypełnienie ich wartościami a następnie wyświetlenie wyniku mnożenia tych macierzy.

```
Podaj liczbe kolumn: 2
Podaj liczbe wierszy: 2
[1][1] = 1
[1][2] = 1
[2][1] = 1
[2][2] = 1

1.00 1.00
1.00 1.00

Podaj liczbe kolumn: 2
Podaj liczbe wierszy: 2
[1][1] = 1
[1][2] = 1
[2][1] = 1
[2][2] = 1

1.00 1.00
1.00 1.00

Wynik mnozenia
1.00 1.00
1.00 1.00
```
