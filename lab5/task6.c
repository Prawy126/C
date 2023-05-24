#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

/* Przetestuj działanie funkcji kopiującej łańcuch znaków z biblioteki standardowej.
Następnie bez korzystania z bibliotek standardowych napisz funkcję cpystr(),
która kopiuje zawartość łańcucha znaków do innej zmiennej. */
void cpystr(const char* src, char* dest, int destSize) {
    int i;
    for (i = 0; i < destSize - 1 && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char tab[6] = "takak";
    char tab2[20];
    memset(tab2, 0, sizeof(tab2)); 

    memcpy(tab2, tab, sizeof(tab)); 
    printf("Funkcja (memcpy): %s\n", tab2);

    char tab3[6] = "takak"; 
    char tab4[20];
    memset(tab4, 0, sizeof(tab4)); 

    cpystr(tab3, tab4, sizeof(tab4)); 
    printf("Bez (cpystr): %s\n", tab4);

    return 0;
}
