#include<stdio.h>

int permutation(int, int);
int factorial(int);

int main(){
    int n,r,c;

    printf("Enter value of n : ");
    scanf("%d",&n);

    printf("Enter value of r : ");
    scanf("%d",&r);

    c = permutation(n,r);

    printf("Permutation will be : %d", c);

    return 0;
}


int permutation(int n, int r){

    int perm  = factorial(n)/factorial(n-r);

    return perm;
}


int factorial(int num){
    int fact = 1;

    while(num){
        fact *= num;
        --num;
    }
    return fact;
}
