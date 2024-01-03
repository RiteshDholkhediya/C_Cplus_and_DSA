#include<stdio.h>
int main(){

    int a[10],i,se=0,so=0;

    printf("Enter 10 numbers\n");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2){
            so += a[i];
        }else
            se += a[i];
    }

    printf("Sum of odd numbers : %d",so);
    printf("\nSum of even numbers : %d",se);

    return 0;

}
