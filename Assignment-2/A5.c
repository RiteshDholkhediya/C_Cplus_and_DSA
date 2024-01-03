#include<stdio.h>
int main(){
    int num,sum=0;

    printf("Enter a three digit number");
    scanf("%d",&num);

    for(int i=0;i<3; i++){
        sum += num%10;
        num = num/10;
    }

    printf("Sum is %d", sum);

    return 0;

}
