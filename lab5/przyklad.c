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