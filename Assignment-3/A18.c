#include<stdio.h>
int main(){
    int a, days = 31;

    printf("Enter the month number : ");
    scanf("%d", &a);

    switch(a){
        case 1: printf("Jan has %d days",days);
                break;
        case 2: printf("Feb has %d days",days-3);
                break;
        case 3: printf("Mar has %d days",days);
                break;
        case 4: printf("Apr has %d days",--days);
                break;
        case 5: printf("May has %d days",days);
                break;
        case 6: printf("Jun has %d days",--days);
                break;
        case 7: printf("Jul has %d days",days);
                break;
        case 8: printf("Aug has %d days",days);
                break;
        case 9: printf("Sep has %d days",--days);
                break;
        case 10: printf("Oct has %d days",days);
                break;
        case 11: printf("Nov has %d days",--days);
                break;
        case 12: printf("Dec has %d days",days);
                break;

        default: printf("Enter valid month number");

    }


    return 0;
}

