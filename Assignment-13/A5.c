#include<stdio.h>
int sumDigits(int);

int main(){
    int n,s;

    printf("Enter a number : ");
    scanf("%d", &n);

    s = sumDigits(n);

    printf("Sum of the digits of %d is %d", n,s);

    return 0;
}


int sumDigits(int n){
    int s;

    if(n < 10){
        return n;
    }
    else{

        s = n%10 + sumDigits(n/10);
        return s;

    }

}
