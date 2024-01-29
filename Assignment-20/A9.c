// Write a program to print the elements of an array in reverse order.

#include<stdio.h>
int main(){
    int *q, a[10],i,j, temp;

    printf("Enter 10 numbers\n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    j=9;
    i=0;
    q = a;

    while(i<=j){
        temp  = q[i];
        q[i] = q[j];
        q[j] = temp;
        i++;
        j--;
    }

    for(i=0; i<10; i++){
        printf("%d ", q[i]);
    }


    return 0;
}
