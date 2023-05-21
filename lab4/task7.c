#include<stdlib.h>
#include<stdio.h>

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