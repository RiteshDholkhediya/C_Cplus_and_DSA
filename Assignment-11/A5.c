#include<stdio.h>

void printNPrime(int);
int isPrime(int );

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    printNPrime(n);

    return 0;
}



void printNPrime(int n){

    int i=2, flag;


    while(n){

         flag = isPrime(i);

         if(!flag){

            printf("%d ", i);

            n--;
         }

         i++;
    }

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
