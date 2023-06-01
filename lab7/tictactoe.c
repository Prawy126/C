#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int const TAB_SIZE = 3;
char board[3][3] = { {' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '} };

void renderboard(char tab[][3],int kolumny,int wiersze){
    printf("  A  B  C\n");
    for(int i = 0; i<kolumny;i++){
        printf("%d",i+1);
        for (int j = 0; j < wiersze; j++)
        {
            printf(" %c ",tab[i][j]);
        }
        printf("\n");
    }
}
bool a=true;
int makeMove(){
    char ruch;
    
    char znak[2];
    int wiersz, kolumna;
    if(a){
        printf("Prosze podac wspolrzedne np A2 gdzie chcesz postawic X: ");
        scanf("%s",znak);
        if(znak[0]=='A'){
            wiersz = 0;
        }else if(znak[0]=='B'){
            wiersz = 1;
        } else {
            wiersz = 2;
        }

        if(znak[1]=='1'){
            kolumna = 0;
        }else if(znak[1]=='2'){
            kolumna = 1;
        }else {
            kolumna = 2;
        }
        
        if(board[kolumna][wiersz]==' '){
            board[kolumna][wiersz]='x';
            a = false;
            return 0;
        }else if(board[kolumna][wiersz]=='x' || board[kolumna][wiersz]=='o'){
            return 2;
        }else if(kolumna < 0 || wiersz < 0){
            return 1;
    }
        
    }else {
        printf("Prosze podac wspolrzedne np A2 gdzie chcesz postawic o: ");
        scanf("%s",znak);
        if(znak[0]=='A'){
            wiersz = 0;
        }else if(znak[0]=='B'){
            wiersz = 1;
        } else if(znak[0]=='C'){
            wiersz = 2;
        }else{
            kolumna = -1;
        }

        if(znak[1]=='1'){
            kolumna = 0;
        }else if(znak[1]=='2'){
            kolumna = 1;
        }else if(znak[1]=='3'){
            kolumna = 2;
        }else {
            kolumna = -1;
        }
        
        if(board[kolumna][wiersz]==' '){
            board[kolumna][wiersz]='o';
            a = true;
            return 0;
        }else if(board[kolumna][wiersz]=='x' || board[kolumna][wiersz]=='o'){
            return 2;
        }else if(kolumna < 0 || wiersz < 0){
            return 1;
    }
        
    }

    
}

bool score() {
    bool odpowiedz = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        if (board[i][2] == board[i][1] && board[i][1] == board[i][0] && board[i][0] != ' ') {
            odpowiedz = true;
            printf("\nWygraywa gracz %c\n",board[2][0]);
            break;
        }
    }

    for (int i = 0; i < TAB_SIZE; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            odpowiedz = true;
            printf("\nWygraywa gracz %c\n",board[2][0]);
            break;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        odpowiedz = true;
        printf("\nWygraywa gracz %c\n",board[2][0]);
    }

    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ') {
        odpowiedz = true;
        printf("\nWygraywa gracz %c\n",board[2][0]);
    }

    return odpowiedz;
}

int main(){
    
   
    bool gra = true, wynik;
    int ruch = 0;
    while (gra)
    {
        renderboard(board,TAB_SIZE,TAB_SIZE);
        makeMove();
        wynik = score();
        if(wynik){
            gra = false;
        }
        if(ruch == 9){
            gra = false;
        }
        ruch ++;
    }
    renderboard(board,TAB_SIZE,TAB_SIZE);
    
    return 0;
}