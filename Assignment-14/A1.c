#include<stdio.h>
int main(){
    int a[10], sum=0;

    printf("Enter 10 numbers :\n");

    for(int i=0; i<10; i++){

        scanf("%d",&a[i]);
        sum += a[i];
    }

    for(int i=0; i<10; i++){
        printf("%d + ", a[i]);
    }

    printf("= %d",sum);

    return 0;
}
