#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*W argc jest liczba argumentów przekazana do programu, argv to tablica o długości (argc + 1) przechowująca te argumenty.*/
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n",argv[0]);
    printf("argv[1] = %s\n",argv[1]);
    printf("argv[1] = %s\n",argv[2]);

    return 0;
}