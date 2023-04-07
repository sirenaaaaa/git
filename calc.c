#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void sum(double a,double b);
void sub(double a,double b);
void mult(double a,double b);
void division(double a,double b);
void sq(double a);
void power(double n,int m);



void sum(double a,double b)
{
    double result=a+b;
    printf("%.2lf",result);
}

void sub(double a,double b)
{
    double result=a-b;
    printf("%.2lf",result);
}

void mult(double a,double b)
{
    double result=(double)a*b;
    printf("%.2lf",result);
}

void division(double a,double b)
{
    double result=(double)a/b;
    printf("%.2lf",result);
}

void sq(double a)
{
    double result=sqrt(a);
    printf("%.2lf",result);
}

void power(double n,int m)
{
    double result=pow(n,m);
    printf("%.2lf",result);
}


int main()
{
    char operation;
    scanf("%c",&operation);

    if(operation=='+')
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        sum(a,b);
    }
    else if(operation=='-')
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        sub(a,b);
    }
    else if(operation=='*')
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        mult(a,b);
    }
    else if(operation=='/')
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        division(a,b);
    }
    else if(operation=='s')
    {
        double a;
        scanf("%lf",&a);
        sq(a);
    }
    else if(operation=='p')
    {
        int m;
        double n;
        scanf("%lf%d",&n,&m);
        power(n,m);
    }

    return 0;
}