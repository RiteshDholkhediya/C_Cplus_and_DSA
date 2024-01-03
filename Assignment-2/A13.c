#include<stdio.h>
int main(){
    int num;

    printf("Enter three digit number ");
    scanf("%d",&num);
    num =  (num%10)*100 + num/10;
    printf("Rotated value is %d",num);


return 0;

}
