#include<stdio.h>

int fact(int);

int main(){
    int n,f;
    printf("Enter a number ");
    scanf("%d",&n);

    f  =  fact(n);

    printf("Factorial is %d ",f);

    return 0;
}

int fact(int n){

    if(n==1 || n==0)
        return 1;

    return n*fact(n-1);
}
