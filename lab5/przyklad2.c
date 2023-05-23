#include <time.h>
#include <stdio.h>
#include <unistd.h> // biblioteka zawiera funkcję sleep która wstrzymuje wykonanie programu o dany czas

int main(int argc, char const *argv[])
{
    // time()
    time_t time0 = 0;
    time_t timenow = time(NULL);
    printf("1 stycznia 1970 minelo = %ld sekund\n", time0);
    printf("Od 1 stycznia 1970 minelo = %ld sekund\n", timenow);

    // difftime()
    time_t time1 = time(NULL);
    sleep(2);
    time_t time2 = time(NULL);
    time_t timediff = difftime(time2,time1); // za pomocą funkcji difftime można obliczyć różnicę pomiędzy datami
    printf("time2 - time1 = %ld sekund\n", timediff);

    // ctime()
    char *timestring;
    timestring = ctime(&timenow);
    printf("data = %s",  timestring);

    // strftime() https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    struct tm *info;
    char data[80];
    info =  localtime(&timenow);
    strftime(data,80,"%A %d %B %Y", info);// funkcja zapisuje date w formacie łańcucha znaków do pierwszego argumentu. https://www.tutorialspoint.com/c_standard_library/c_function_strftime.htm
    printf("Data w zdefiniowanym formacie - |%s|\n", data );

    return 0;
}