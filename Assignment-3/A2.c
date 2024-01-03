#include<stdio.h>
int main(){

    int num;

    printf("Enter a number");
    scanf("%d",&num);

    if(num%5){
        printf("Not divisible by 5");
    }
    else{
        printf("Divisible by 5");
    }

    return 0;
}
