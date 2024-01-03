#include<stdio.h>
int countDigits(int);


int main(){
    int n,c;

    printf("Enter a number : ");
    scanf("%d",&n);

    c = countDigits(n);

    printf("Number of digits in %d is %d", n, c);


    return 0;
}


int countDigits(int n){

    if(n<10)
        return 1;
    else
        return 1 + countDigits(n/10);

}
