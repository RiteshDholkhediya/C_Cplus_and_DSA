#include<stdio.h>

void displayReverseArray(int [], int);

int main(){
    int a[100],size,i;

    printf("Enter number of elements in an array : ");
    scanf("%d",&size);

    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }

    displayReverseArray(a,size);

    return 0;
}

void displayReverseArray(int a[], int size){

    int i;

    for(i=size-1; i>=0; i--){
        printf("%d ",a[i]);
    }
}
