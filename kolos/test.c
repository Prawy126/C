#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>
#define TBA_LEN 20; //różnica polega na tym że wartość tej zmiennej można zmienić a stałej nie można zienić
double potegowanie;

struct funkcjakwadratowa
{
    float a, b, c, x1 ,x2;
    bool delta;

};

char countk()
{
    char count[8]={"k asd kk"};
    printf("|");
    int licz=0;
    for(int i=0;i<100;i++)
    {
        if(count[i]=='k')
        {
            licz++;
            printf("k");
        }else
        {
            printf("%c",count[i]);
        }
    }
    printf("| zawiera %d liter k", licz);
    return count[7];


}

double power(int a, int b)
{
    double wynik=1;
    for(int i=0;i<b;i++)
    {
        wynik=wynik*a;
        
    }
    
    return wynik;
}

int main()
{
    
    
        //zad2
    int var1=123123;
    float var2=0.94334;
    char var3='M';
    char var4[8]="Pilecki\0";
    printf("%d, %f, %c, %s.",var1,var2,var3,var4);
    
    //zad3
    int task3_var;
    printf("\nProsze podac wartosc:\n");
    scanf("%d", &task3_var);
    
    if(task3_var>30)
    {
        printf("opcja1");
    }else
    if(task3_var<30)
    {
        printf("opcja2");
    }else
    if(task3_var==30)
    {
        printf("opcja3");
    }

    //zad4
    int task4_var=0;
    int a;
    printf("\nprosze podac liczbe i wartosc wykonywanej opcji:");
    scanf("%d", &task4_var);
    scanf("%d", &a);
   switch( a )
{
    case 1:
        printf("\n podana wartosc to: %d",task4_var);
        task4_var=task4_var+10;
        printf("\nWartosc zmieniala sie o: %d\n",task4_var);
        break;
    case 2:
        task4_var=+20;
        printf("\nWartosc zmieniala sie o: %d\n",task4_var);
        break;
    case 3:
        task4_var=task4_var+30;
        printf("\nWartosc zmieniala sie o: %d\n",task4_var);
        break;
}

   
  //zad5
   float tab[7]={0.1,0.2,0.3,0.4,0.5,0.6,0.7};
   for(int i=0;i<7;i++)
   {
    printf("%f\n",tab[i]);
   }
   
  //zad6 do zrobienia jeszcze
  int taks6_var;
  printf("Podaj wartosc: ");
  scanf("%d",&taks6_var);
  int potega=0; 
  printf("[ 0, ");
  for(int i=1;i<taks6_var;i+0)
  {
    i=i*2;
    printf("%d ",i);
  }
  printf("]\n");

  //zad7
 double wynik = power(2,4);
 printf("%lf", wynik);

//zad8
 countk();


//zad9
   int *wsk1 ;
    wsk1 = &var1;
    *wsk1=125132;
    printf("wksaznik wsk1 = %d\n", *wsk1);
//zad10
    struct funkcjakwadratowa test1={1,2,3,4,5,"True"};
//zad11
struct funkcjakwadratowa x[100];
srand(time(NULL));
for(int i=0;i<100;i++)
{
    x[i].a=rand() % 10 + 1;
    x[i].b=rand() % 10 + 1;
    x[i].c=rand() % 10 + 1;
}

//zad12

for(int i=0;i<100;i++)
{
    float a,b,c;
    double delta;
    a=x[i].a;
    b=x[i].b;
    c=x[i].c;
    delta=(b*b)-4*(a*c);
    if(delta>=0)
    {
        x[i].delta=true;
    }else
    {
        x[i].delta=false;
    }
}
    return 0;
}
