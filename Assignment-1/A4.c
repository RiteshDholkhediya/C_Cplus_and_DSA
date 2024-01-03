#include<stdio.h>
int main(){

    int r;
    double pi=3.14, area;
    printf("Enter the radius");
    scanf("%d",&r);
    area = pi*r*r;
    printf("Area of the circle is %f having the radius %d",area,r);

    return 0;
}
