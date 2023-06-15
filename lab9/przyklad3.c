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