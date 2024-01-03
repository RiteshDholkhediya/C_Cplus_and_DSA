#include<stdio.h>
int main(){
    int num, val;

    printf("Enter a number");
    scanf("%d",&num);

    val = num/100;

    if(val<1 || val>9){
        printf("%d is not three digit number\n",num);

    }
    else{
        printf("%d is three digit number\n",num);

    }

    return 0;
}

// this is solution of 3 and 4 questions

