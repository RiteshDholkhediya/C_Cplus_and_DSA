// Write a program to print all prime numbers b/w two numbers

#include<stdio.h>
int main(){
    int a, b,i,n, flag;

    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    for(n=a; n<=b; n++){

        if(n==1)
            continue;
        flag=0;

        for(i=2; i<=n/2; i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",n);
        }
    }


    return 0;
}
