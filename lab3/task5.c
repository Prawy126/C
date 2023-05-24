#include<stdlib.h>
#include<stdio.h>

/*Spróbuj wykonać poprzednie zadanie za pomocą innej pętli(jeśli używałeś for za pomocą pętli while lub do-while).*/

int main(){

    int n;
    printf("Prosze podac liczbe: ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        if(i%3==0){
            i++;
            continue;
            
        }
        printf("%d\n",i);
        i++;
    }

    return 0;
    return 0;
}