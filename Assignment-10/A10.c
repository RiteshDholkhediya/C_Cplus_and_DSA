#include<stdio.h>

void printPrimeFactors(int);

int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);


    printPrimeFactors(num);

    return 0;
}

void printPrimeFactors(int num){

    int i=2;

    while(num > 1){
        if(num%i == 0){
            printf("%d, ", i);
            num  = num/i;
            continue;
        }

        i++;
    }
}
