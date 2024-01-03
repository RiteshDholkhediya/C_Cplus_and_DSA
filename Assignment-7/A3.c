#include<stdio.h>
int main(){
    int a=-1, b=1, c=0, n, flag=0;

    printf("Enter the number ");
    scanf("%d",&n);

    while(n>=c){
        if(n == c){
            flag=1;
            break;
        }
        a=b;
        b=c;
        c = a+b;
    }

    if(flag){
        printf("%d is fibonacci series number",n);
    }else
        printf("%d is not fibonacci series number",n);

    return 0;

}

