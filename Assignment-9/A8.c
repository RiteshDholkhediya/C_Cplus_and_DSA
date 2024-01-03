#include<stdio.h>
int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch(num>0){

        case 1: printf("\nNumber is Positive");
                break;
        default: switch(num < 0){

                 case 1: printf("\nNumber is Negative");
                         break;
                 default: printf("\nNeither positive nor negative");

        }

    }

    return 0;

}
