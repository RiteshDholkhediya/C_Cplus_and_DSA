#include<stdio.h>
int main(){
    int a[10],max,i;

    printf("Enter 10 numbers\n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1; i<10; i++){
        if(max < a[i])
            max=a[i];
    }

    printf("Greatest number among 10 numbers is : %d",max);


    return 0;
}
