#include<stdlib.h>
#include<stdio.h>

int main()
{
    FILE *x=fopen("file.txt","a");
    if(x==NULL)
    {
        printf("blad");

        return 1;

    }
    
    fprintf(x,"\n2 Monitor 200");
    fclose(x);
    return 0;
}