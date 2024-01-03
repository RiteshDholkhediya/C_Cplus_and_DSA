#include<stdio.h>

int isPrime(int );
int main(){
    int num, flag;

    printf("Enter the number : ");
    scanf("%d", &num);

    flag = isPrime(num);

    if(flag){
        printf("Not a prime number");
    }else{
        printf("Prime number");
    }


    return 0;
}

int isPrime(int num ){
    int i=2, flag=0;

    if(num <=1)
        return 1;


    while(i<= num/2){

        if(num%i == 0){
            flag=1;
            break;
        }

        i++;
    }

    return flag;

}
