//Write a program to compute the sum of all elements in an array using pointers
#include<stdio.h>

int main(){
    int *p, a[10], i, sum=0;

    printf("Enter 10 numbers : \n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    p = a;

    for(i=0; i<10; i++){
        sum = sum+p[i];
    }

    printf("Sum of 10 number is %d", sum);
    return 0;
}
