#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/*Napisz funkcję findandreplace() która w podanym jako parametr łańcuchu znaków szuka słowa podanego jako inny parametr a nastepnie zamienia na słowo podane jako kolejny parametr funkcji. Funkcja zwraca liczbę zmienionych słów.

np.

findandreplace("aaa ccc bbbcccdddwww ccc", "ccc", "aaa")
zamieni "aaa ccc bbbcccdddwww ccc" na "aaa aaa bbbcccdddwww aaa" i zwróci wartość 2.*/

int findandreplace(char tab[30], char tab1[5], char tab2[5]) {
    printf("%s , %s ,%s\n", tab, tab1, tab2);
    int pomoc2 = 0;
    int zmienione = 0; 

    while (tab[pomoc2] != '\0') {
        bool znaleziono = true;
        for (int i = 0; i < 5; i++) {
            if (tab1[i] != tab[pomoc2 + i]) {
                znaleziono = false;
                break;
            }
        }
        if (znaleziono) {
            for (int i = 0; i < 5; i++) {
                tab[pomoc2 + i] = tab2[i];
            }
            zmienione++;
            pomoc2 += 5;
        } else {
            pomoc2++; 
        }
    }

    printf("%s\n", tab);
    return zmienione;
}

int main() {
    int zmienione = findandreplace("aaa ccc bbbcccdddwww ccc", "ccc", "aaa");
    printf("Liczba zmienionych slow: %d\n", zmienione);
    return 0;
}
