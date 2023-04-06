#include <stdlib.h>
#include <stdio.h>

int main()
{
    double a[4][2];
    a[0][0] = 3.1;
    a[0][1] = 3.6;
    a[1][0] = 2.2;
    a[1][1] = 6.42;
    a[2][0] = 3.1;
    a[2][1] = 3.6;
    a[3][0] = 3.5;
    a[3][1] = 32.6;
    int c, b;
    c = 0;
    b = 0;
    for(int i = 0; i<=3; i++)
    {
        b=0;
        printf("|%lf |",a[c][b]);
        b=1;
        printf("%lf |\n", a[c][b]);
        c++;
       
    }
    return 0;
}