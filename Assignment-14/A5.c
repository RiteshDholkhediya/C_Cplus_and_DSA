#include<stdio.h>
int main(){
    int a[10],min,i;

    printf("Enter 10 numbers\n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(i=1; i<10; i++){
        if(min > a[i])
            min=a[i];
    }

    printf("Smallest number among 10 numbers is : %d",min);


    return 0;
}

