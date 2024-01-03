#include<stdio.h>
int main(){
    int fact =1, n, temp;

    printf("Enter a number ");
    scanf("%d",&n);

    temp = n;

    while(temp){

        fact = fact*temp;
        temp--;
    }

    printf("factorial of %d is %d ",n,fact);

    return 0;

}
