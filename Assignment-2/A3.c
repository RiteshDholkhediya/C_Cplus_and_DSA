#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("a = %d and b = %d\n",a,b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("Value of a = %d and b = %d",a,b);
    return 0;

}
