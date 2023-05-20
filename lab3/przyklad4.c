#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i = 0; i<10;i++){
        if (i == 5){
            break;
        }
        printf("i = %i\n",i);
    }
    return 0;
}