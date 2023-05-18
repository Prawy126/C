#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<stdbool.h>

int main(){
    int znak, liczba, litera;
    //randomowe liczby
    srand(time(NULL));
    //menu
    printf("Podaj liczbe znakow specjalnych: ");
    scanf("%d",&znak);
    printf("Podaj liczbe liczb: ");
    scanf("%d",&liczba);
    printf("Podaj liczbe liter: ");
    scanf("%d",&litera);
    //zmienne
    int dlugosc = znak + liczba + litera;
    char tab[dlugosc];
    char tab2[dlugosc];
    //pętle losujące znaki, liczby, litery
    for(int i = 0;i<znak;i++){
        tab[i] = (rand()%15)+33;
        
        printf("%c",tab[i]);
    }
     for(int i = znak;i<znak+liczba;i++){
        tab[i] = (rand()%10)+48;
        printf("%c",tab[i]);
    }
    for(int i = znak+liczba;i<znak+liczba+litera;i++){
        tab[i]=(rand()%25)+65;
        printf("%c",tab[i]);
    }
    for(int i = 0; i < dlugosc;i++){
        tab2[i] = 0;
    }
    //pętla zmieniająca kolejność znaków
    bool wynik = true;
    for(int i = 0; i<dlugosc;i++){
        int a = rand()%dlugosc;
        if(tab2[a]==0){
            tab2[a]=tab[a];
            tab[a]=0;
        }
    }
    //uzupełnienie tablicy
    for(int i = 0; i<dlugosc;i++){
        int a,b=0;
        bool pomoc=true;
        if(tab2[i]=0){
            while(pomoc){
                if(tab[b]!=0){
                    a = b;
                    pomoc = false;
                }else{
                    b++;
                }
            }
            tab2[i]=tab[a];
            tab[a] = 0;
        }
    }
    //wypisanie wyniku
    for(int i = 0;i<dlugosc;i++){
        printf("%c",tab[i]);
    }
    return 0;
}