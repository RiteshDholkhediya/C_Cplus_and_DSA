#include<stdio.h>
int main(){
    int sum=0, n, i=1;

    printf("Enter a number ");
    scanf("%d",&n);

    while(i<=n){

        sum += i*i*i;
        i++;
    }

    printf("Sum of %d natural numbers is %d ",n,sum);

    return 0;

}
