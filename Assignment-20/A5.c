//Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>

int main(){
    int a,b,max,*q,*p;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    p = &a;
    q = &b;

    if(a!=b){
        max = (*p)>(*q)? (*p) :(*q);
        printf("Maximum between %d and %d is %d",a,b,max);
    }else{
        printf("Both numbers are equal");
    }

    return 0;

}
