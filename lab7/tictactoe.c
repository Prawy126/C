#include <stdio.h>
#include<stdlib.h>
char pomoc1;
void renderboard(char tab[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ",tab[i][j]);
        }
        printf("\n");
    }
}
int makemove(char tab[4][4],int polek, int polew){
    int odpowiedz;
    //wolne pole
    if(tab[polek][polew]==' '){
        odpowiedz = 1;
    }//zajęte pole
    if(tab[polek][polew]!=' '){
        odpowiedz = 2;
    }
    //poza zakresem
    if(polek>4 && polew>4){
        odpowiedz = 1;
    }
    else{
        odpowiedz = 3;
    }
    return odpowiedz;
}

int score(char tab[4][4]){
    int odpowiedz=0,pomoc = 0;
    //poziomo
    for(int i = 1;i<4;i++){
        for(int j = 1;j<=3; j++){
            if(tab[j][i]==tab[j+1][i]){
                pomoc ++;
            }
              if(pomoc==3){
                pomoc1 = tab[1][i];
                return 1;
              }  
        }
    }
    
    //pionowo 
    for(int i = 1;i<4;i++){
        for(int j = 1;j<=3; j++){
            if(tab[i][j]==tab[i][j+1]){
                pomoc ++;
            }
              if(pomoc==3){
                pomoc1 = tab[i][1];
                return 1;
              }  
        }
    }
    //sprwadzenie czy nie są puste
    int sprawdz = 0;
     for(int i = 1;i<4;i++){
        for(int j = 1;j<=3; j++){
            if(tab[i][j]==tab[i][j]){
                if(tab[i][j]!=' '){
                    sprawdz = 10;
                }
        }
    }
    if(sprawdz>0){
        odpowiedz = 0;
    }
    return odpowiedz;
}
}

int main() {
    char tab[4][4] = {{' ', 'A', 'B', 'C'},
                                 {'1', ' ', ' ', ' '},
                                 {'2', ' ', ' ', ' '},
                                 {'3', ' ', ' ', ' '}};
    int a=0,x,y,znak;
    int wynik=0;
    while(wynik==0){
        //ruch dla x
        renderboard(tab);
        printf("Ruch X\n");
        printf("Prosze podac numer indexu od A - C(1-3): ");
        scanf("%d",&y);
        printf("Prosze podac liczbe indexu 1 - 3: ");
        scanf("%d",&x);
        wynik = score(tab);
        if(a==1)
        {
            tab[y][x] = 'X';
        }
        a = makemove(tab,y,x);
        wynik = score(tab);
        
        //ruch dla O
        printf("Ruch dla O");
          renderboard(tab);
        printf("Prosze podac numer indexu od A - C(1-3): ");
        scanf("%d",&y);
        printf("Prosze podac liczbe indexu 1 - 3: ");
        scanf("%d",&x);
        
        a = makemove(tab,y,x);
        wynik = score(tab);
        if(a==1)
        {
            tab[y][x] = 'O';
        }
    }
    printf("wygrwya %c, %d\n",pomoc1 ,wynik);
        printf("%d",a);
    
    
    return 0;
}


