#include<stdio.h>
int main(){
    int monthNum;

    printf("Enter month number : ");
    scanf("%d", &monthNum);

    switch(monthNum){

        case 1: printf("\nNumber of days 31\n");
                break;
        case 2: printf("\nNumber of days 28\n");
                break;

        case 3: printf("\nNumber of days 31\n");
                break;
        case 4: printf("\nNumber of days 30\n");
                break;

        case 5: printf("\nNumber of days 31\n");
                break;
        case 6: printf("\nNumber of days 30\n");
                break;
        case 7: printf("\nNumber of days 31\n");
                break;
        case 8: printf("\nNumber of days 31\n");
                break;

        case 9: printf("\nNumber of days 30\n");
                break;

        case 10: printf("\nNumber of days 31\n");
                break;

        case 11: printf("\nNumber of days 30\n");
                break;

        case 12: printf("\nNumber of days 31\n");
                break;

        default: printf("\n Please enter valid month number ");


    }

    return 0;

}
