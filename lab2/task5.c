#include<stdlib.h>
#include<stdio.h>

/*Skompiluj kod do pliku uruchomieniowego arguments.exe. Uruchom kod poleceniem arguments.exe 12 cześć "hello world"

Przetestuj działanie kodu uruchamiając program z róznymi argumentami np. arguments.exe 1 2 3 4(W jaki sposób odczytać wartość "4" z tego polecenia?), w komentarzu napisz co przechowuje zmienna argc oraz argv.*/

int main(int argc, char const *argv[]){
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n",argv[0]);
    printf("argv[1] = %s\n",argv[1]);
    printf("argv[1] = %s\n",argv[2]);
//argc pokazuje lczbe parametrow, argv(tablica) pokazuje siezke pliku w 0 indexie
    return 0;
}