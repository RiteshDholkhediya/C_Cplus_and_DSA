#include<stdio.h>
void printNO(int );

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNO(n);

    return 0;
}


void printNO(int n){

    if(n==1){
        printf("1 ");
    }

    else{
        printNO(n-1);
        printf("%d ", 2*n-1);
    }

}
