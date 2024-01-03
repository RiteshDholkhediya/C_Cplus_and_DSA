#include<stdio.h>

int combination(int, int);
int factorial(int);

int main(){
    int n,r,c;

    printf("Enter value of n : ");
    scanf("%d",&n);

    printf("Enter value of r : ");
    scanf("%d",&r);

    c = combination(n,r);

    printf("Combination will be : %d", c);

    return 0;
}


int combination(int n, int r){

    int comb  = factorial(n)/(factorial(r)*factorial(n-r));

    return comb;
}


int factorial(int num){
    int fact = 1;

    while(num){
        fact *= num;
        --num;
    }
    return fact;
}
