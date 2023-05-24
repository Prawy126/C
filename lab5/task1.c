#include<stdlib.h>
#include<stdio.h>

/*Za pomocą pętli wypisz wszystkie znaki char i odpowiadające im wartośći całkowite w następującej postaci:

<0> = 48*/

int main(){

    for(int i = 0; i<128;i++){
        
        printf("<%c> = %d   <%c> = %d    <%c> = %d\n",i,i,i++,i++,i+2,i+2);
    }
    

    return 0;
}