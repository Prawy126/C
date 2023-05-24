#include<stdlib.h>
#include<stdio.h>

/*Utwórz program który wypisze w konsoli tablicę z poprzedniego zadania wykorzystując pętlę w formacie:
| 3.1 | 3.6   |
| 2.2 | 6.42 |
| 3.1 | 3.6   |
| 3.5 | 32.6 |

*/
int main(){
float tab[4][2]={{3.1,3.6},{2.2,6.42},{3.1,3.6},{3.5,32.6}};

    for(int i=0;i<4;i++){
        for(int j = 0;j<2;j++){
            printf("| %0.2f ",tab[i][j]);
        }
        printf("|\n");
    }
    return 0;
}