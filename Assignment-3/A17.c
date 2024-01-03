#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three sides of the triangle to check whether it is valid triangle or not : ");
    scanf("%d %d %d", &a,&b,&c);

    if((a+b)>c && (a+c)>b && (b+c)>a)
        printf("Valid triangle");
    else
        printf("Not a valid triangle");


    return 0;
}


