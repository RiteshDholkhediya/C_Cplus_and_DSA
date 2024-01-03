

#include<stdio.h>
void printSquare(int );

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printSquare(n);

    return 0;
}


void printSquare(int n){

    if(n==1){
        printf("%d ",n*n);
    }

    else{

        printSquare(n-1);
        printf("%d ", n*n);


    }

}
