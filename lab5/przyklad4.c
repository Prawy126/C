#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x = 0.5;
    double y = 0.1;
    double result;

    printf("%.16lf \n", M_PI);

    // poniższe funkcje przyjmują i zwracają wartości wyrażone w radianach
    result = acos(x);
    printf("arc cos = %lf \n", result);

    result = asin(x);
    printf("arc sin = %lf \n", result);

    result = atan(x);
    printf("arc tangent = %lf \n", result);

    result = atan2(y, x); //https://en.wikipedia.org/wiki/Atan2
    printf("the angle θ between the ray to the point (x, y) and the positive x-axis = %lf \n", result);
   
    result = cos(x);
    printf("cosine = %lf \n", result);

    result =  sin(x);
    printf("sine = %lf \n", result);

    // eksponenta https://en.wikipedia.org/wiki/Exponential_function
    result = exp(x);
    printf("exp(%lf) = %lf \n",x, result);

    // logarytm naturalny https://en.wikipedia.org/wiki/Natural_logarithm
    result = log(x);
    printf("log(%lf) = %lf \n",x, result);

    // logarytm o podstawie 10
    result = log10(x);
    printf("log10(%lf) = %lf \n",x, result);

    // dzieli liczbę na części ułamkowe i całkowite
    double fraction, total;
    fraction = modf(x, &total);
    printf("frac part = %lf total part = %lf  \n",fraction, total);
    
    // podnoszenie liczby do potęgi.
    double a = 2, b = 4;
    result = pow(a, b);
    printf("%.0lf^%.0lf = %.0lf \n", a,b, result);

    // pierwiastek kwadratowy
    result = sqrt(x);
    printf("sqrt(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w górę.
    result = ceil(x);
    printf("ceil(%lf) = %lf \n",x,  result);

    // najbliższa liczba całkowita zaokrąglając w dół.
    result =  floor(x);
    printf("floor(%lf) = %lf \n",x,  result);

    // wartość absolutna - pozbycie się minusa przy liczbie
    double c = -10.99;
    result = fabs(c);
    printf("fabs(%lf) = %lf \n",c,  result);

    // oblicza resztę z dzielenia dla liczb rzeczywistych (% dla liczb całkowitych)
    result = fmod(x, y);
    printf("fmod(%lf, %lf) = %lf \n",x,y,  result);
    return 0;
}