#include<stdio.h>

int isContainGivenDigit(int, int);

int main(){

    int dig, num, flag;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Enter a digit : ");
    scanf("%d",&dig);



    flag = isContainGivenDigit(num, dig);
    if(flag){
        printf("Number : %d contains digit : %d", num,dig);
    }else
        printf("Does not contains given digit");


    return 0;
}


int isContainGivenDigit(int num, int d){

    int temp, flag=0 ;

    while(num){

        temp = num%10;
        if(temp == d){
            flag=1;
            break;
        }

        num /=10;
    }
    return flag;
}
