#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *out = fopen("files/file2.txt", "w");

    // fprintf()
    int x1 = 321;
    float x2 = 3.21;
    double x3 = 42.32;
    char x4 = 'f';
    char x5[] = "abcd";
    fprintf(out, "%d\n", x1);
    fprintf(out, "%f\n", x2);
    fprintf(out, "%lf\n", x3);
    fprintf(out, "%c\n", x4);
    fprintf(out, "%s\n", x5);

    // fputs()
    char y1[] = "efgh";
    fputs(y1, out);
    fputs("\nijklm",out);

    fclose(out);
    /* code */
    return 0;
}