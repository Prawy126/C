#include<stdlib.h>
#include<stdio.h>

int main(){
    char tab[27];
    for(int i = 97; i<124;i++){
        tab[i-97]=i;
    }
    char *f;
    f = &tab[5];
    printf("%c",*f);
    return 0;
}