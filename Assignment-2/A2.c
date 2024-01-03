#include<stdio.h>
int main(){
    int num;

    printf("Enter a number");
    scanf("%d",&num);

    printf("Number %d without last digit is %d", num, num/10);
    return 0;

}
