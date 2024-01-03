#include<stdio.h>
int main(){
    int i,n, flag;


    // Program to print prime numbers b/w 1 to 100

    for(n =1; n<=100; n++){
        flag=0;

        if(n==1)
            continue;

        for(i=2;i<=n/2; i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", n);
    }

    return 0;
}
