#include<stdlib.h>
#include<stdio.h>

int main()
{
    char litera[25];
    char *pomoc;
    int n=3;
    for(int i=0;i<26;i++)
    {
        litera[i]=97+i;
    }
    for(int i=2;i<26;i)
    {   
        i+=n;
        pomoc=&litera[i];
        printf("%c",*pomoc);
    }

    return 0;
}