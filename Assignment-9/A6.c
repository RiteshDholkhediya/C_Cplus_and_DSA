#include<stdio.h>
int main(){
    int year;

    printf("Enter year : ");
    scanf("%d",&year);

    switch(year%4){

        case 0: switch(year%100){

                    case 0: if(year%400 ==0)
                                printf("\nIt is leap year");
                            else
                                printf("\nIt is not leap year");

                                break;

                    default: printf("\nIt is leap year");
                }
                break;

        default: printf("\nIt is not a leap year");

    }

    printf("\nValue\n%d",23 || 0 );

    return 0;

}
