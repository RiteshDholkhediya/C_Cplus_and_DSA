#include<stdio.h>
int main(){

    int i,digit;

    printf("Enter a number");
    scanf("%d",&digit);

    digit = (digit/10)*10;

    printf("Change value is %d", digit);

    return 0;
}
