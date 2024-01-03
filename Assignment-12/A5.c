
#include<stdio.h>
void printNE(int );

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNE(n);

    return 0;
}


void printNE(int n){

    if(n==1){
        printf("%d ",2*n);
    }

    else{
        printNE(n-1);
        printf("%d ", 2*n);

    }

}
