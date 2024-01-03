#include<stdio.h>
int main(){
    int a=-1, b=1, c, n,i=0;

    printf("Enter the number ");
    scanf("%d",&n);

    while(i<n){
        c = a+b;
        printf("%d ", c);
        a=b;
        b=c;
        i++;
    }

    return 0;

}

