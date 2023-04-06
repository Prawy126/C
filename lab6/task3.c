#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct patients
{
    char name[20];
    char surname[20];
    int age;
    long long int pesel;
    float height;
    float weight;
};

void showdata(struct patients ptest){

    float bmi= ptest.weight / ptest.height * ptest.height;
    printf("%f\n" , bmi);

    if(bmi < 16)  
    {  
        printf("Twoja kategoria BMI to: wygłodzenie\n");  
    }  
    else if(bmi >= 16 && bmi <= 16.99)  
    {  
        printf("Twoja kategoria BMI to: wychudzenie\n");  
    }  
    else if(bmi >= 17 && bmi <= 18,49)  
    {  
        printf("Twoja kategoria BMI to: niedowaga\n");  
    }  
    else if(bmi >= 18.5 && bmi <= 24.99)  
    {  
        printf("Twoja kategoria BMI to: optimum\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.99)  
    {  
        printf("Twoja kategoria BMI to: nadwaga\n");  
    }  
    else if(bmi >= 30 && bmi <= 34.99)  
    {  
        printf("Twoja kategoria BMI to: Otylosc I\n");  
    }  
    else if(bmi >= 35 && bmi <= 39.99)  
    {  
        printf("Twoja kategoria BMI to: Otylosc II\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Twoja kategoria BMI to: Otylosc III\n");  
    }  
    else  
    {  
        printf("Zle dane \n");  
    }  

}
struct patients tab[50];


    struct patients p1 = {"Jan", "Kowalski", 25 , 123456789 , 1.8 , 83};
    struct patients p2 = {"Jan", "Kowalski", 35 , 123456789 , 1.8 , 83};
    struct patients p3 = {"Jan", "Kowalski", 45 , 123456789 , 1.8 , 83};
    struct patients p4 = {"Jan", "Kowalski", 55 , 123456789 , 1.8 , 83};
    struct patients p5 = {"Jan", "Kowalski", 65 , 123456789 , 1.8 , 83};
    

int main(int argc, char const *argv[])
{
    
  
    tab[0] = p1;
    tab[1] = p2;
    tab[2] = p3;
    tab[3] = p4;
    tab[4] = p5;
    
    
    for (size_t i = 0; i < 5; i++)
    {
        printf("%s %s %i %i %2f %2f\n", tab[i].name, tab[i].surname, tab[i].age, tab[i].pesel, tab[i].height, tab[i].weight);
    }
    
    showdata(p1);
    showdata(p2);
    showdata(p3);
    showdata(p4);
    showdata(p5);
    return 0;
}