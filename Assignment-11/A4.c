#include<stdio.h>

int isPrime(int);
int nextPrime(int);

int main(){

    int num, nPrime;

    printf("Enter a number : ");
    scanf("%d",&num);

    nPrime = nextPrime(num);

    printf("Next prime number of %d is %d", num, nPrime);


    return 0;
}


int isPrime(int num ){
    int i=2, flag=0;

    if(num <= 1)
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

int nextPrime(int num){

    int flag;

    while(1){
        num = num +1;

        flag  = isPrime(num);

        if(!flag){
            return num;
        }

    }
}
