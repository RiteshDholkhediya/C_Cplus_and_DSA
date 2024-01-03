#include<stdio.h>
int power(int n,int p);

int main(){
    int n,p, result;

    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter power of the number : ");
    scanf("%d",&p);


    result = power(n,p);

    printf("Power of %d is %d and result is %d",n,p,result);

    return 0;
}

int power(int n,int p){

    if(p==0)
        return 1;
    else if(p==1)
        return n;
    else{
        return n* power(n,p-1);
    }

}
