#include<stdlib.h>
#include<stdio.h>

/*Napisz program task1 który utworzy plik file.txt zawierający napis "1 Bike 432".*/

int main(){
    FILE *plik = fopen("./tekst.txt","w");
    if(plik==NULL){
        perror("nie udalo sie otworzyc pliku");
        return 1;
    }
    fprintf(plik,"1 Bike 432");
    fclose(plik);
    return 0;
}