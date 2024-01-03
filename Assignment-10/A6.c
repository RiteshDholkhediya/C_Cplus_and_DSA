#include<stdio.h>
int main(){

    int num, fact;

    printf("Enter a number : ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is %d", num, fact);

    return 0;
}

int factorial(int num){
    int fact = 1;

    while(num){
        fact *= num;
        --num;
    }
    return fact;
}
