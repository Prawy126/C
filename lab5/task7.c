#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*Przetestuj działanie funkcji łączącej dwa łańcuchy znaków. Napisz własną funkcję catstr łączącą dwa łańcuchy znaków.

Jeśli użytkownik będzie próbował połączyć dwa łańcuchy znaków tak że wykroczą one poza zakres zdefiniowanej tablicy program powinien wypisać komunikat a następnie zakończyć działanie korzystając z funkcji exit(EXIT_FAILURE) będącej częścią pakietu <stdlib.h>.

Przetestuj działanie funkcji. Napisz odpowiednie komentarze objaśniające co testuje dany przypadek.*/

void catstr(char tab1[10], char tab2[10], char odpowiedz[21]) {
    for (int i = 0; i < 10; i++) {
        odpowiedz[i] = tab1[i];
    }
    int a = 0;
    for (int i = 10; i < 20; i++) {
        odpowiedz[i] = tab2[a];
        a++;
    }
    odpowiedz[20] = '\0';  // dzięki \0 ciąg znaków nie rozwala się bo printf wie kiedy skończyć

}


int main(){
    char tab[10]="Ala ma kot";
    char tab2[10] = "jest bialy";
    char tab3[22];
    
    for(int i = 0;i<20;i++){
        tab3[i]='\0';
    }
    int tablica1 , tablica2, tablica3;
    tablica1 = sizeof(tab);
    tablica2 = sizeof(tab2);
    tablica3 = sizeof(tab3);
    if(tablica3 < tablica2+tablica1){
        exit(EXIT_FAILURE);
    }

    catstr(tab,tab2,tab3);
    printf("%s",tab3);
    //łańcuchy muszą być tej samej długości
    char tab5[20]="Ala ma kot";
    char tab6[20] = "jest bialy";
    strcat(tab5,tab6);
    printf("\n\n%s",tab5);

    return 0;
}