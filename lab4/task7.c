#include<stdlib.h>
#include<stdio.h>

/*Utwórz tablicę liter od a do z. Utwórz pętlę w której za pomocą wskaźników wypiszesz co n-ty element(zdefiniowany przez użytkownika) tej tablicy począwszy od 'c'.*/

int main(){
    char tab[27];
    int n;
    for(int i = 97; i<124;i++){
        tab[i-97]=i;
    }
    printf("Prosze podac wartosc n: ");
    scanf("%d",&n);
    char *a;
    for(int i = 0; i<27;i+=n){
        a=&tab[i];
        printf("%c",*a);
    }
    return 0;
}