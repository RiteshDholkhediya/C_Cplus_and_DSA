#include<stdio.h>
void printNR(int);

int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printNR(n);

    return 0;

}

void printNR(int n){

    if(n==1)
        printf("1 ");
    else{
        printf("%d ", n);
        printNR(n-1);
    }

}
