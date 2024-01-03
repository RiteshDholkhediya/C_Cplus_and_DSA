#include<stdio.h>
int main(){
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    if(a > 0)
        printf("Positive number",a);
    else
        printf("Negative or zero",a);


    return 0;
}


