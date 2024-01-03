#include<stdio.h>

double circleArea(double);

int main(){

    double area,r;

    printf("Enter radius of the circle");
    scanf("%lf",&r);

    area = circleArea(r);
    printf("Area of the circle is : %.2lf", area);
    return 0;

}


double circleArea(double r){
    return 3.14*r*r;
}
