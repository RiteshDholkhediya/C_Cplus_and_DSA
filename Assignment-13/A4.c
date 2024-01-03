#include<stdio.h>
int sumNSquare(int);

int main(){
    int n, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum = sumNSquare(n);

    printf("Sum of the square of %d numbers is : %d",n, sum);


    return 0;
}

int sumNSquare(int n){
    int s;
    if(n==1)
        return 1;
    else{
       s =  n*n + sumNSquare(n-1);
        return s;
    }

}


