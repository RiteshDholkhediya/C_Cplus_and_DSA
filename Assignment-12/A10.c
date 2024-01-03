#include<stdio.h>

void printRN(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);


    printRN(n);
    return 0;
}


void printRN(int n){

    if(n<=9){
        printf("%d",n);
    }else{
        printf("%d", n%10);
        printRN(n/10);

    }
}
