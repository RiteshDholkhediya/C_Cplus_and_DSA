#include<stdio.h>
int fibo(int);

int main(){

    int n;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1; i<=n ; i++){
        printf("%d ", fibo(i));
    }
    return 0;

}


int fibo(int n){

    if(n==0 || n==1)
        return !n;

    else{
        return fibo(n-1) + fibo(n-2);
    }

}
