#include<stdio.h>

void printBinary(int);
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);


    printBinary(n);
    return 0;
}

void printBinary(int n){

    if(n==1)
        printf("1");

    else if(n==0)
        printf("0");
    else{
        printBinary(n/2);
        printf("%d",n%2);
    }
}
