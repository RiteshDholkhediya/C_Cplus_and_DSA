#include<stdio.h>

int isEven(int);

int main(){
    int num, flag;

    printf("Enter a number : ");
    scanf("%d",&num);

    flag = isEven(num);

    if(flag){
        printf("Even number");
    }else
        printf("Odd number");

    return 0;
}

int isEven(int n){

    if(n%2)
        return 0;
    return 1;
}
