#include<stdio.h>
int main(){
    int num, flag=0,i=2;

    printf("Enter a number ");
    scanf("%d",&num);

    while(i <= num/2){
        if(num%i == 0)
            flag=1;
        i++;
    }

    if(flag){
        printf("Not a prime number");
    }else
        printf("Prime Number");

    return 0;
}
