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