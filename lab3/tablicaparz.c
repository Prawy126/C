#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a[1000];
    int b=0, c=0;
    for(int i=0; i<=999; i++)
    {
       c+=2;
       a[b]=c;
       printf("%d) %d\n", b, a[b]);
        b++;
    }
    return 0;
}