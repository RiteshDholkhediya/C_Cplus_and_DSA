#include<stdio.h>
int sumN(int);

int main(){
    int n, sum=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum= sumN(n);

    printf("Sum of the %d numbers is : %d",n, sum);


    return 0;
}

int sumN(int n){
    int s;
    if(n==1)
        return 1;
    else{
       s =  n + sumN(n-1);
        return s;
    }

}
