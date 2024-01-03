
#include<stdio.h>

void printPrimeNumbersBetween(int, int);
int isPrime(int);

int main(){
    int a,b,flag;

    printf("Enter two numbers to print prime numbers between them : ");
    scanf("%d%d",&a,&b);

    printPrimeNumbersBetween(a,b);


    return 0;
}


void printPrimeNumbersBetween(int a, int b){

    int start = a+1, flag;

    while(start < b){

        flag  = isPrime(start);
        if(flag){
            printf("%d ", start);
        }

        start ++;

    }


}


int isPrime(int num ){
    int i=2, flag=1;

    if(num <= 1)
        return 0;


    while(i<= num/2){

        if(num%i == 0){
            flag=0;
            break;
        }

        i++;
    }

    return flag;
}
