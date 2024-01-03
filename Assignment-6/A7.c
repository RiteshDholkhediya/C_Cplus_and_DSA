#include<stdio.h>
int main(){
    int digits = 0 , n, temp;

    printf("Enter a number ");
    scanf("%d",&n);

    temp = n;

    do{
    temp/=10;
    digits ++;

    }while(temp);

    printf("Total numbers of digits are %d ",digits);

    return 0;

}
