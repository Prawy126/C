#include <stdio.h>

/*Napisz funkcję comparestr() która w procentach określi podobieństwo dwóch łańcuchów znaków (takie same znaki na tej samej pozycji oznaczają podobieństwo).*/

void comparestr() {
    char str1[100], str2[50];
    printf("Prosze podac pierwszy lancuch: ");
    scanf("%s ", str1);
    printf("Prosze podac drugi lancuch: ");
    scanf("%s ", str2);
    
    int len1 = 0, len2 = 0;
    
    
    while (str1[len1] != '\0') {
        len1++;
    }
    
    
    while (str2[len2] != '\0') {
        len2++;
    }
    
    int matching = 0;
    
  
    for (int i = 0; i < len1; i++) {
        if (str1[i] == str2[i]) {
            matching++;
        }
    }
    
    float similarity = (float)matching / len1;
    printf("Łancuchy są podobne w %.2f%%\n", similarity * 100);
}

int main() {
    comparestr();
    return 0;
}
