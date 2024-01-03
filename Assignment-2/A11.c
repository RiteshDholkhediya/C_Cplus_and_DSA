#include<stdio.h>
int main(){

    int n,digit;

    printf("Enter a number ");
    scanf("%d",&n);
    printf("Enter a digit ");
    scanf("%d",&digit);

    n = n*10 + digit;
    printf("Changed value is %d",n);

    return 0;
}
