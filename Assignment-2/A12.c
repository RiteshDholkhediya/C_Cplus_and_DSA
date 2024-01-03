#include<stdio.h>
int main(){
    double USD = 76.23, rupay;

    printf("Enter rupees ");
    scanf("%lf",&rupay);

    printf("%.2lf rupees in %.2lf$", rupay, rupay*USD);


return 0;
}
