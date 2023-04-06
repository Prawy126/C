#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double euclidDistance(double p[3], double q[3])
{
    double x = q[0]-p[0], y = q[1]-p[1], z = q[2]-p[2];
    return sqrt(x*x + y*y + z*z);
}

int main()
{
    double p[3]={1,1,1};
    double q[3]={2,1,1};
    double p1[3]={3,3,3};
    double q1[3]={1,2,3};
    
    double tab=euclidDistance(p,q);
    printf("%lf ",tab);
    printf("\n");
    tab=euclidDistance(p,p1);
    printf("%lf ",tab);
    
    printf("\n");
    tab=euclidDistance(p,q1);
    printf("%lf ",tab);
    
    printf("\n");
    tab=euclidDistance(p1,q);
    printf("%lf ",tab);
    printf("\n");
    tab=euclidDistance(q1,q);
    printf("%lf ",tab);
    printf("\n");
    tab=euclidDistance(p1,q1);
    printf("%.1lf ",tab);
    printf("\n");
    
    return 0;
}