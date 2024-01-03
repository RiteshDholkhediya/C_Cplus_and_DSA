#include<stdio.h>
int main(){
    int a, unitDigit;
    printf("Enter a number");
    scanf("%d",&a);
    unitDigit = a%10;
    printf("Unit digit of %d is %d", a, unitDigit);
    return 0;

}
