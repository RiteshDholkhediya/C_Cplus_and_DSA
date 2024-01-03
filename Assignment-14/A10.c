#include<stdio.h>
int main(){
    int a[100],b[100],i,n;

    printf("Enter number of values : ");
    scanf("%d",&n);

    printf("\nEnter %d values :\n");

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\n");

    for(i=0; i<n; i++){
        printf("%d ",b[i]);
    }

    return 0;
}
