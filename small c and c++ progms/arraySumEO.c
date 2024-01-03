#include<stdio.h>
int main(){

    int a[10],i, sumE=0, sumO=0;

    printf("Enter ten numbers : ");


    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<10; i++){
        if(a[i]%2)
            sumO +=a[i];
        else
            sumE +=a[i];
    }

    printf("\nSum of even numbers : %d",sumE);
    printf("\nSum of odd numbers : %d",sumO);


}
