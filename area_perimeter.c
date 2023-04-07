#include <stdio.h>
#include <stdlib.h>

double square_per(double a);
double square_area(double a);
double circle_per(double r);
double circle_area(double r);

double square_per(double a)
{
    double result=4*a;
    return result;

}
double square_area(double a)
{
    double result=a*a;
    return result;

}
double circle_per(double r)
{
    double result=2*3.14159*r;
    return result;

}
double circle_area(double r)
{
    double result=3.14159*r*r;
    return result;

}



int main()
{
    char type;
    scanf("%s",&type);
    if(type=='s')
    {
        double a;
        scanf("%lf",&a);
        double per=square_per(a);
        double area=square_area(a);
        printf("%.2lf %.2lf",per,area);

    }
    else if(type=='c')
    {
        double r;
        scanf("%lf",&r);
        double per=circle_per(r);
        double area=circle_area(r);
        printf("%.2lf %.2lf",per,area);

    }

    return 0;
}
