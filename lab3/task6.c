#include <stdio.h>
#include <stdbool.h>

/* Utwórz program, który wypisuje kolejne liczby pierwsze. */

bool czyLiczbaPierwsza(int n) {
    if (n <= 1)
        return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    printf("%d jest liczba pierwsza\n%d jest liczba pierwsza\n", 2, 3);
    
    for (int i = 4; i < 100; i++) {
        if (czyLiczbaPierwsza(i)) {
            printf("%d jest liczba pierwsza\n", i);
        }
    }

    return 0;
}
