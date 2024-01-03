// Write a program to find next prime number of given number

#include<stdio.h>
int main(){
    int a, b,i,n, flag;

    printf("Enter a number ");
    scanf("%d", &a);
    b = a;
    while(1){
        flag=0;
        a++;
        if(a < 2)
            continue;

        for(i=2; i<=a/2; i++){
            if(a%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Prime number after number %d is %d", b,a);
            break;
        }
    }

    return 0;
}

