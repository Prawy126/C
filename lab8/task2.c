#include<stdlib.h>
#include<stdio.h>

/*Napisz program task2 który do pliku file.txt doda kolejną linijkę "2 Monitor 200"*/

/*Przy kolejnych uruchomieniach programu plik file.txt powinien dopisywać kolejne wiersze "2 Monitor 200". np. po 3 uruchomieniach plik powinien wyglądać tak.*/

int main(){
    FILE *plik = fopen("./tekst.txt","a");
    if(plik==NULL){
        perror("nie udalo sie otworzyc pliku.");
        return 1;
    }
    
    //poprawić sprawdzanie 2 linii
    fprintf(plik,"\n2 Monitor 200");
    char tab[30];
    fscanf(plik,"%s",tab);
    printf("%s",tab);
    fclose(plik);
    return 0;
}