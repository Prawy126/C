#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/*Utwórz strukturę date przechowującą: rok, miesiąc, numer dnia w miesiącu, godzinę, liczbę minut, liczbę sekund.

Funkcja time(0) z biblioteki <time.h> zwraca obecną datę w postaci "timestamp" (liczba sekund od 1 stycznia 1970) https://www.epochconverter.com/ Napisz funkcję timestamptodate() która zamieni czas w sekundach liczbę lat, miesięcy, dni ... sekund i zapisze te dane w strukturze date.

Napisz funkcję datetotimestamp() która dokona odwrotnej konwersji na podstawie przekazanej struktury date.

Utwórz funkcję showtime() przyjmującą format np. "YYYY MM DD HH:MM:SS" a nastepnie wypisującą w konsoli obecną datę w formacie zdefiniowanym przez parametr format. Obsłuż minimum możliwość zdefiniowania użytkownikowi formatu dnia, miesiąca i roku.

yy - wyświetla dwie cyfry roku np. 22 yyyy - wyświetla pełny rok np. 2022 m - wyświetla pojedynczą cyfrę oznaczającą miesiąc np. 3 mm - wyświetla dwie cyfry oznaczające miesiąc np. 03 mmm - wyśeitla 3 znaki oznaczające miesiąc np. mar mmmm - wyświetla pełną nazwę miesiąca np. march d - wyświetla pojedynczą cyfrę oznaczającą dzień 4 dd - wyświetla dwie cyfry oznaczające dizeń np. 04

Utwórz funkcję printtime() która działa podobnie jak funkcja showtime() z tą różnicą że nie przyjmuje parametrów lecz format jest zdefiniowany w stałej globalnej DATE_FORMAT.

Utwórz funkcję isbetweendates() która przyjmuje 3 daty i zwraca jeden jeśli data podana jako pierwszy argument znajduje się w okresie pomiędzy pozostałymi dwoma argumentami. 0 w przeciwnym przypakdu.*/

#define DATE_FORMAT "YYYY MM DD HH:MM:SS"

struct mytime
{
    int rok, dzien, godzina, minuta, sekunda;
    char miesiac[20];
};


void timestamptodate(time_t timestamp, struct mytime *date)
{
    struct tm *local_time;
    local_time = localtime(&timestamp);
    
    date->rok = local_time->tm_year + 1900;  // Rok jest przechowywany jako rok od 1900
    date->miesiac[0] = '\0';  // Wyczyszczenie zawartości pola miesiac

    switch (local_time->tm_mon)
    {
        case 0:
            sprintf(date->miesiac, "styczeń");
            break;
        case 1:
            sprintf(date->miesiac, "luty");
            break;
        // Dodaj pozostałe miesiące...
        default:
            sprintf(date->miesiac, "nieznany");
            break;
    }

    date->dzien = local_time->tm_mday;
    date->godzina = local_time->tm_hour;
    date->minuta = local_time->tm_min;
    date->sekunda = local_time->tm_sec;
}

void datetotimestamp(struct mytime date, time_t *timestamp)
{
    struct tm time_struct;
    
    time_struct.tm_year = date.rok - 1900;  // Rok jako rok od 1900
    time_struct.tm_mon = date.miesiac - 1;  // Miesiące są numerowane od 0 do 11, odejmujemy 1
    time_struct.tm_mday = date.dzien;
    time_struct.tm_hour = date.godzina;
    time_struct.tm_min = date.minuta;
    time_struct.tm_sec = date.sekunda;
    time_struct.tm_isdst = -1;  // Automatyczne określenie DST
    
    *timestamp = mktime(&time_struct);
}

void showtime(const char *format)
{
    time_t now;
    struct tm *local_time;
    char buffer[100];

    now = time(NULL);
    local_time = localtime(&now);

    strftime(buffer, sizeof(buffer), format, local_time);
    printf("Aktualna data: %s\n", buffer);
}

void printtime()
{
    showtime(DATE_FORMAT);
}

int isbetweendates(struct mytime date1, struct mytime date2, struct mytime date)
{
    time_t timestamp1, timestamp2, timestamp;
    datetotimestamp(date1, &timestamp1);
    datetotimestamp(date2, &timestamp2);
    datetotimestamp(date, &timestamp);

    if (timestamp >= timestamp1 && timestamp <= timestamp2)
        return 1;
    else
        return 0;
}

int main()
{
    struct mytime czas;
    time_t now;
    now = time(NULL);
    timestamptodate(now, &czas);
    return 0;
}