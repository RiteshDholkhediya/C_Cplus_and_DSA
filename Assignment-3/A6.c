#include<stdio.h>
int main(){
    int num1, num2;

    printf("Enter a two numbers");
    scanf("%d %d",&num1,&num2);



    if(num1> num2){
        printf("%d is greater\n",num1);

    }
    else if(num2 > num1){
        printf("%d is greater\n",num2);

    }
    else
        printf("Both are same and number is %d",num1);

    return 0;
}



