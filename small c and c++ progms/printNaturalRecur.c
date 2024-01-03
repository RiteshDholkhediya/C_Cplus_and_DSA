#include<stdio.h>

void printNatural(int);
int main(){

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printNatural(num);

    return 0;

}


void printNatural(int n){

    if(n>=1){
        printNatural(n-1);
        printf("%d ",n);
    }
}
