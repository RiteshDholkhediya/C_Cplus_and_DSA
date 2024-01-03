#include<stdio.h>
int sumNE(int);

int main(){
    int n, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum = sumNE(n);

    printf("Sum of the %d numbers is : %d",n, sum);


    return 0;
}

int sumNE(int n){
    int s;
    if(n==1)
        return 2;
    else{
       s =  2*n + sumNE(n-1);
        return s;
    }

}


