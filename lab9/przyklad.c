#include <stdio.h>
#include <stdlib.h>

union union_name {
    int a;
    char b;
    char c[5];
    struct asd{
        float d;
    } struct_name;
} Tmyname;

int main(int argc, char const *argv[])
{ 
    union union_name x = {4};
    printf("%d\n", x);
    x.b = 'd';
    printf("%c\n", x);  
    x.struct_name.d = 4.5;

    printf("Po zmianie ktoregos z pol struktury inne wartosci tez sa zmienione:\n");
    printf("x.a = %d", x.a);

    return 0;
}