#include<stdio.h>
int fact(int);

int main(){
    int n,f;

    printf("Enter a number : ");
    scanf("%d", &n);

    f = fact(n);

    printf("factorial of %d is %d", n,f);

    return 0;
}


int fact(int n){


    if(n == 0  || n==1){
        return 1;
    }
    else{

      return  n * fact(n-1);


    }

}

