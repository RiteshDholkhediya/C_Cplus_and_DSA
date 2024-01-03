#include<stdio.h>

double calcSimpleInterest(double, double,double);

int main(){
    double time, principle, rate, si;

    printf("Enter the time period : ");
    scanf("%lf",&time);

    printf("Enter the principle amount : ");
    scanf("%lf",&principle);

    printf("Enter rate of interest : ");
    scanf("%lf",&rate);


    si = calcSimpleInterest(principle, rate, time);

    printf("Simple interest is : %.2lf", si);


    return 0;
}


double calcSimpleInterest(double p, double r,double t){
    return (p*r*t)/100;
}
