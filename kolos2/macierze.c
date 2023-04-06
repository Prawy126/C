#include <stdio.h>
#include <stdlib.h>

typedef struct tablica{
    int row;
    int col;
    float **tab;
} tablica;

void matrix_multiplication(tablica x, float x_mnozenie)
{
    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
           x.tab[i][j] *= x_mnozenie; // tab[i] = tab[i] * x_mnozenie
        }
    }
}


void print_matrix(tablica x)
{

    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
            printf("%f\t", x.tab[i][j]);
        }
        printf("\n");
    }
}

tablica createMatrix(int row, int col){
    tablica x;
    x.col = col;
    x.row = row;
    x.tab = (float **) calloc(row, sizeof(float *));
    for (int i = 0; i < row; i++)
    {
        x.tab[i] = (float *) calloc(col, sizeof(float));
    }
    return x;
}

int main(int argc, char const *argv[])
{
    int row = 4;
    int col = 2;
    tablica asd = createMatrix(row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("podaj wartosc tab[%d][%d]", i, j);
            float val;
            scanf("%f", &val);
            asd.tab[i][j] = val;
        }
    }
    matrix_multiplication(asd, 4);
    print_matrix(asd);
    return 0;
}

