#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//rozmiar planczy i sama plansza
int const tab_size=4;

char board[4][4] = { {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '},
                                  {' ', ' ', ' ', ' '} };

//rysowanie tablicy
void renderboard(char tab[tab_size][tab_size])
{
    printf("  A B C\n");
    for(int i=0;i<tab_size+1;i++)
    {
        printf("%d",i);
        for(int j=0;j<tab_size+1;j++)
        {
            printf(" %c",tab[i][j]);
        }
        printf("\n");
    }
}

//kody błędów i końca gry

int makeMove(char gracz)
{
    int liczba,litera;
    printf("Prosze podac pole planszy(najpierw numer wiersza nastepnie numer kolumny):");
    scanf("%c %d",&litera,&liczba);

    if(board[litera][liczba]==' ')
    {
        return 0;
    }
    if((litera>tab_size)||(liczba>tab_size))
    {
        return 1;
    }
    if((board[litera][liczba]=='X')||(board[litera][liczba]=='O'))
    {
        return 2;
    }
    else
    {
        return 3;
    }
    
    
}
char score()
{
    int sprawdzenie=1,liczba1,liczba2,liczba3,liczba4;
    char odpowiedz;
    for(int i=0;i<tab_size;i++)
    {
        for(int j=0;j<tab_size;i++)
        {
            //pionowo
            if(board[i][j]!=board[i][j+1])
            {
                sprawdzenie=0;
            }
            if((j==tab_size-1)&&(sprawdzenie==1))
            {
                liczba1=i;
                liczba2=j;
            }
            //poziomo
            if(board[j][i]!=board[j+1][i])
            {
                sprawdzenie=0;
            }
            if((j==tab_size-1)&&(sprawdzenie==1))
            {
                liczba1=i;
                liczba2=j;
            }
        }
    }
    for(int i=0;i<tab_size;i++)
    {
        if(board[i][i]!=board[i+1][i+1])
        {
            sprwadzenie=0;
        }
    }
    for(int i=tab_siez;i>0;i--)
    {
        if(board[i][i]!=board[i-1][i-1])
        {
            sprwadzenie=0;
        }
    }
    if(sprawdzenie==1)
    {
        return odpowiedz;
    }
}
int main()
{
    int x;
    char y;
    printf("Podaj swoj znak: ");
    scanf("%c",y);
    if(y=='x')
    {
        y='X';
    }if(y=='o')
    {
        y='O';
    }
    x=makeMove(y);
    renderboard(board);
    socer();
    return 0;
}

//dokończyć funkcję socer