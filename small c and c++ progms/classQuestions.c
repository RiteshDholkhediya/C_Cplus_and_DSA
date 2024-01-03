#include<stdio.h>
int main(){
    int a=5, b=6,c,d,sum;
    printf("%d %d\n", a,b);
    printf("a = %d and b = %d\n",a,b);
    printf("a = %d and b = %d\n",b,a);
    printf("Value of a is %d and value of b is %d\n",a,b);
    printf("sum of %d and %d is %d\n",a,b,a+b);
    printf("%d + %d = %d\n",a,b,a+b);

    printf("Enter two numbers");
    scanf("%d %d",&c,&d);
    sum = c + d;
    printf("Sum of %d and %d is %d",c,d,sum);
    return 0;

}
