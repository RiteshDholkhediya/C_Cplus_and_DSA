#include<stdio.h>
int main(){
    int a[100],n,i;

    printf("Enter number of elements you want to enter in an array : ");
    scanf("%d",&n);

    printf("\nEnter %d elements : \n",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered Elements :\n");

    for(i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }

    return 0;

}
