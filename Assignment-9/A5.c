#include<stdio.h>
int main(){
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    switch(a){

        case 1: printf("\nGood");
                break;
        case 2: printf("\nBetter");
                break;

        case 3: printf("\nBest");
                break;

        default: printf("\nInvalid");
                break;
    }

}
