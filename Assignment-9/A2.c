#include<stdio.h>
int main(){

    char ch;
    int a,b,c;
    while(1){

        printf("\na. Addition ");
        printf("\nb. Substraction ");
        printf("\nc. Multiplication ");
        printf("\nd. Division ");
        printf("\ne. Exit ");

        printf("\nPlease enter your choice ");
        scanf("%c", &ch);
        fflush(stdin);

        switch(ch){

            case 'a': printf("\nEnter two numbers\n");
                      scanf("%d%d",&a,&b);
                      printf("Sum of two numbers is %d", a+b);
                      break;

            case 'b': printf("\nEnter two numbers\n");
                      scanf("%d%d",&a,&b);
                      printf("Substraction of two numbers is %d", a-b);
                      break;

            case 'c': printf("\nEnter two numbers\n");
                      scanf("%d%d",&a,&b);
                      printf("Multiplication of two numbers is %d", a*b);
                      break;

            case 'd': printf("\nEnter two numbers\n");
                      scanf("%d%d",&a,&b);
                      printf("Division of two numbers is %d", a/b);
                      break;

            case 'e': exit(0);

            default: printf("\nPlease enter valid choice");


        }

    }

    return 0;
}
