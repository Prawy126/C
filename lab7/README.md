# C


## Zadania

### `TicTacToe.exe`
Aktualny stan gry będzie przechowywany w 2 wymiarowej tablicy znaków.
Stan powinien być zmienną globalną aby każda funkcja miała do niego dostęp.
Ponadto przydatna będzie informacja o wielkośći planszy która może także być przechowywana w zmiennej globalnej.
```c
char tab[3][3] = { {' ', ' ', ' '},
                   {' ', ' ', ' '},
                   {' ', ' ', ' '} }
```
#### Krok 1
Napisz funkcję `renderboard()` która w konsoli wypisze obecny stan gry w następującej postaci:
```terminal
  A B C
1   
2   
3   
```

```terminal
  A B C
1 X   O
2 X O
3   X
```
Funkcja powinna być w stanie wyrenderować planszę o rozmiarach od 3x3 do 26x26 pól.
Przetestuj działanie funkcji.
na tablicach:
<details>
<summary>Tablice testowe</summary>

```c
int const TAB_SIZE = 4;
char board[TAB_SIZE][TAB_SIZE] = { {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '} };
```

```c
//Można zmienić rozmiar tablicy na mniejszy/więszy
int const TAB_SIZE = 26;
char board[TAB_SIZE][TAB_SIZE];
//w funkcji main ustawiane są wartośći w tablicy
int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < TAB_SIZE; i++)
    {
        for (size_t j = 0; j < TAB_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
    return 0;
}
```

</details>

<details>
<summary>Podpowiedź</summary>

```c
// Typ char przechowuje liczby od 0 do 255 które w funkcji printf() są dekodowane na znaki widoczne w konsoli.
// A - 65
// Z - 90
// a - 97
// z - 122
for(char i = 65; i<91; i++){
    printf("%c ", i);
}
```

Nagłowki kolumn można wypisać przed wypisywaniem wartości planszy.

Nagłówki wierszy można wypisać przed iteracją po drugim wymiarze tablicy.
</details>

##### Rozwiązanie:

Tablicę można zainicjalizować jako zmienną globalną podobnie rozmiar tablicy:

```c
int const TAB_SIZE = 3;
char board[3][3] = { {'X', 'O', 'O'},
                    {'X', 'X', 'O'},
                    {'O', ' ', 'X'} };
```

Rozmiar tablicy musi być nam znany aby sprawnie iterować po kolejnych wartościach.
Funkcja renderboard może wykorzystywać globalną informacje o rozmiarze tablicy:

```c
renderboard(){
    for(int i= 0; i< TAB_SIZE; i++){
        for(int j= 0; j< TAB_SIZE; j++){
            printf("%c", tab[i][j]);
        }
    }
}
```

#### Krok 2
Napisz funkcję `makeMove()` która przyjmuje symbol danego gracza na planszy i zwraca następujące kody:
- 0 - jeśli ruch jest dozwolony (zajmujemy puste pole)
- 1 - jeśli wykraczamy poza obszar planszy
- 2 - jeśli chcemy zająć pole innego gracza
- 3 - inne błędy
W ciele funkcji zaimplementuj zapytania do użytkownika o wybranie pola które chce zająć.

<details>
<summary>Podpowiedź</summary>

Za pomocą instrukcji scanf() możemy odczytać kilka wartości jednocześnie.

```c
char col;
int row;
printf("Podaj wartośc col i row np.  ", player);
scanf(" %c %i", &col, &row);
```

Po odczytaniu wartości wystarczy zamienic je na indeksy (numerowane od 0) i sprawdzić odpowiednie warunki.
</details>

#### Krok 3
Napisz funkcję `score()` która sprawdzi w pionie, poziomie i po przekątnej czy jeden z graczy wygrał, a jeżeli tak zwróci jego symbol.

<details>
<summary>Podpowiedź</summary>

Należy sprawdzać czy w kolumach, wierszach, na przekątnych znajdują się takie same znaki.
Jeśli natrafimy na znak ' ' możemy przerwać dalsze poszukiwania w kolumnie, wierszu, na przekątnej. Podobnie jesli natrafimy na symbol innego gracza.

</details>

#### Krok 4
Zaimplementuj logikę gry w funkcji main.

### *`AdvancedTicTacToe.exe`

Zmodyfikuj grę TicTacToe tak aby użytkownik mógł zdefiniować wielkość planszy, liczbę i symbole graczy.

<details>
<summary>Podpowiedź</summary>

```c
#include <stdlib.h>
#include <stdio.h>

// Zmienne globalne dostępne dla funkcji
// wskaźnik na pierwszy element tablicy
int *board;
// rozmiar tablicy
int BOARD_SIZE = 3;

int main(int argc, char const *argv[])
{
    // Talice w pamięci są przechowyane w kolejnych adresach
    int tab[2][3] = { {1,2,3},{4,5,6} };
    int tab_size = sizeof(tab)/sizeof(int);
    printf("tab_size = %i\n",tab_size);
    int iterations = 0;
    for (int *i = tab; iterations < (sizeof(tab)/sizeof(int)); i++)
    {
        printf("%i ", *i);
        iterations++;
    }
    printf("\n");

    // Rozmiar tablicy 2x3 typu int to (2*int)*(3*int) gdzie int to wielkość typu int.
    int size = (BOARD_SIZE * sizeof(int)) * (BOARD_SIZE * sizeof(int));
    // funkcja maloc() zarezerwuje w pamięci określoną liczbę bajtów i zwróci wskaźnik do pierwszego bajtu.
    board = malloc(size);
    
    // wiedząc że plansza ma rozmiar 3x3 co 3 komórka w pamięci będzie początkiem nowego wiersza.
    int row = 0;
    for (int *rowwsk = board; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (int *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            *colwsk = 0;
            col++;
        }
        row++;
    }

    row = 0;
    for (int *rowwsk = board; row < BOARD_SIZE; rowwsk + BOARD_SIZE)
    {
        int col = 0;
        for (int *colwsk = rowwsk; col < BOARD_SIZE; colwsk++)
        {
            printf("board[%i][%i] = %i \t",row, col,*colwsk);
            col++;
        }
        printf("\n");
        row++;
    }

    // free zwalnia pamięć
    free(board);
    return 0;
}
```

```c
 // +------+
    // |      | pointer to pointer to T 
    // +------+
    //     |
    //     v
    // +------+------+------+
    // |      |      |      | pointers to T 
    // +------+------+------+
    //     |      |      |     +-------------+-------------+-------------+
    //     |      |      +---->|             |             |             | elements of type T
    //     |      |            +-------------+-------------+-------------+ 
    //     |      |     +-------------+-------------+
    //     |      +---->|             |             | elements of type T
    //     |            +-------------+-------------+ 
    //     |
    //     v
    // +-------------+-------------+-------------+-------------+
    // |             |             |             |             | elements of type T
    // +-------------+-------------+-------------+-------------+ 
    double **tab2;
    tab2 = malloc(row * sizeof(double *));
    for (int i = 0; i < 3; i++)
    {
        tab2[i] = calloc(col,sizeof(double));
    }

    // pzypisujemy wartości
    tab2[0][0] = 0.0;
    tab2[0][1] = 0.1;
    tab2[1][0] = 1.0;
    tab2[1][1] = 1.1;
    tab2[2][0] = 2.0;
    tab2[2][1] = 2.1;

    // dla 3d array
    int ***tab3d;
    tab3d = malloc(2*sizeof(double **));
    for (int i = 0; i < 2; i++)
    {
        tab3d[i] = malloc(2*sizeof(double *));
        for (size_t j = 0; j < 2; j++)
        {
            tab3d[i][j] = calloc(2,sizeof(double));
        }
        
    }
```

</details>

### `Task3.exe`

Napisz program który będzie wypisywał w konsoli spiralę o zadanej wielkości - każde kolejne ramię  np.

```
Podaj wielkość: 9
    # # # # # # #               
    #           #
    #   # # #   #
    #   #   #   #
    #       #   #
    # # # # #   #
                #
# # # # # # # # #
```

Długość lini tworzącej spiralę zwiększa się o 1.

<details>
<summary></summary>

Jak obliczyć wielkość tablicy przechowującej spiralę o wielkościach: 5, 6, 7, 8?

</details>

<details>
<summary></summary>

Jak wyznaczyć początek rysowania spirali?

</details>


<details>
<summary></summary>

Które indeksy tablicy zmieniać poruszając się na północ, wschód, południe, zachód?

</details>
          
 
      
