#include<stdio.h>
int main(){
    int num;

    printf("Enter a number");
    scanf("%d",&num);

    if((num&1) == 0){
        printf("Even number\n");
        printf("%d Even ",num&1);
    }
    else{
        printf("Odd number \n");
        printf("%d Odd ",num&1);
    }

    return 0;
}

// this is solution of 3 and 4 questions
