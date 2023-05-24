#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i<10;i++){
        if (i == 5){
            continue;
        }
        printf("i = %i\n",i);
    }
    return 0;
}