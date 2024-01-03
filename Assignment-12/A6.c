
#include<stdio.h>
void printNER(int );

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNER(n);

    return 0;
}


void printNER(int n){

    if(n==1){
        printf("%d ",2*n);
    }

    else{
        printf("%d ", 2*n);
        printNER(n-1);


    }

}
