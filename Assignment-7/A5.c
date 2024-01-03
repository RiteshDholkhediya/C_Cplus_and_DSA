#include<stdio.h>
int main(){
    int a, b, i=2, flag=0;

    printf("Enter two numbers ");
    scanf("%d %d",&a, &b);

    while(1){

        if(i>a || i>b)
            break;

        if((a%i==0) && (b%i==0)){
           flag=1;
           break;
        }
        i++;
    }

    if(flag)
        printf("Numbers are not co-prime");
    else
        printf("Co-prime numbers");

    return 0;
}
