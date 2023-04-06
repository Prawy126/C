#include<stdlib.h>
#include<stdio.h>

int main()
{
    char litera[25];
    int liczba=97;
    for(int i=0;i<26;i++)
    {
        litera[i]=liczba+i;
    }
    char *f=&litera[5];
    printf("%c",*f);
    return 0;
}