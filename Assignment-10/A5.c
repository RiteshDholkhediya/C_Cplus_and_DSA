#include<stdio.h>
int main(){
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printOdd(num);

    return 0;
}

int printOdd(int num){

    int i;

    for(i=1; i<=num; i++){
        printf("%d ",2*i-1);
    }

}
