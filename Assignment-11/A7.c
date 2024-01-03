#include<stdio.h>

void printFibo(int);

int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printFibo(num);

    return 0;
}


void printFibo(int num){

    int a=-1, b=1, c;

    if(num > 0){

        while(num){

            c = a+b;
            printf("%d ", c);

            a=b;
            b=c;
            num--;
        }

    }

}
