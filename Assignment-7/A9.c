#include<stdio.h>
int main(){
    int n,temp,i=0,digits=0,sum=0,m, singleDigit;

    printf("Enter a number to check whether it is armstrong number or not ");
    scanf("%d",&n);
    temp = n;

    if(temp>0){

        while(temp){
            temp = temp/10;
            digits++;
        }

    }else{
        digits=1;
    }

    temp = n;

    while(temp){
        singleDigit = temp%10;
        i=0;
        m=1;

        while(i<digits){
            m = m*singleDigit;
            i++;
        }
        sum = sum + m;
        temp  = temp/10;
    }

    if(sum == n)
        printf("Armstrong number and sum is %d", sum);
    else
        printf("Not a Armstrong number and sum is %d", sum);

    return 0;

}
