#include<stdio.h>
#include<string.h>
int main()
{
char imie[13];
	char nazwisko[100];
	printf("Podaj swoje imie\n");
	scanf("%s", imie);
	printf("Podaj swoje nazwisko\n");
	scanf("%s", nazwisko);
	printf("Imie:%s\n", imie);
	printf("Naziwsko:%s\n", nazwisko);
	scanf("koniec programu");
	return 0;
}