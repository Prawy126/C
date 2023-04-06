#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *in = fopen("file1.txt", "r");    // otwiera plik do odczytu (plik musi istniec)
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
