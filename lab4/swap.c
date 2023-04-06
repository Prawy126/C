#include<stdlib.h>
#include<stdio.h>

void swap(float *a,float *b)
{
   float g=*a;
   *a=*b;
   *b=g;
}

int main()
{
    float t=213,z=22.321;
    swap(&t,&z);
    printf("%f, %f",t,z);

    return 0;
}