#include<stdlib.h>
#include<stdio.h>

int main()
{
   
   
    for(int i=0;i<2;i++)
    {
       
        
        for(int j=0;j<2;j++)
        {
            printf("%d %d %d %d\n",i,j,j&i,i|j );
        }
    }
}