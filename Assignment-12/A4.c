#include<stdio.h>
void printNOR(int );

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNOR(n);

    return 0;
}


void printNOR(int n){

    if(n==1){
        printf("1 ");
    }

    else{

        printf("%d ", 2*n-1);
        printNOR(n-1);
    }

}
