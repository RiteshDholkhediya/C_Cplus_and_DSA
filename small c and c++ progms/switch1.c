#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,x;


    while(1){
        printf("\n1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit");

        printf("\nEnter your choice ");
        scanf("%d",&x);


        switch(x){

            case 1: printf("\nEnter two numbers\n");
                    scanf("%d%d", &a, &b);
                    printf("\nAddition is : %d\n", a+b);
                    break;

            case 2: printf("\nEnter two numbers\n");
                    scanf("%d%d", &a, &b);
                    printf("\Subtraction of two numbers : %d\n", a-b);
                    break;

            case 3: printf("\nEnter two numbers\n");
                    scanf("%d%d", &a, &b);
                    printf("\nMultiplication of two numbers : %d\n", a*b);
                    break;

            case 4: printf("\nEnter two numbers\n");
                    scanf("%d%d", &a, &b);
                    printf("\nDivision of two numbers : %d\n", a/b);
                    break;

            case 5: exit(0);

            default: printf("\n You have entered wrong choice");



        }
    }



    return 0;

}
