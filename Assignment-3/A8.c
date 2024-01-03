#include<stdio.h>
int main(){
    int year;

    printf("Enter year to check whether given number is leap year or not ");
    scanf("%d",&year);





    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 ==0 ){
                printf("%d is leap year", year);
            }
            else
                printf("%d is not leap year",year);
        }
        else
            printf("%d is leap year",year);

    }else{

        printf("%d is not year",year);
    }


    return 0;
}

// this is solution of 3 and 4 questions


