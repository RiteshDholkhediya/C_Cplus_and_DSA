#include<stdio.h>
int sumNO(int);

int main(){
    int n, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum = sumNO(n);

    printf("Sum of the %d numbers is : %d",n, sum);


    return 0;
}

int sumNO(int n){
    int s;
    if(n==1)
        return 1;
    else{
       s =  2*n-1 + sumNO(n-1);
        return s;
    }

}

