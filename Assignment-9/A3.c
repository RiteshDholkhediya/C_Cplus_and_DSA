#include<stdio.h>
int main(){
    int day;

    printf("Enter day number : ");
    scanf("%d", &day);

    switch(day){

        case 1: printf("\nIts Sunday ");
                break;
        case 2: printf("\nIts Monday ");
                break;
        case 3: printf("\nIts Tuesday ");
                break;
        case 4: printf("\nIts Wednesday ");
                break;
        case 5: printf("\nIts Thursday ");
                break;
        case 6: printf("\nIts Friday ");
                break;
        case 7: printf("\nIts Saturday ");
                break;


    }

    return 0;
}
