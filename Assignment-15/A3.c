#include<stdio.h>

void sort(int [], int);


int main(){
    int a[100],i,size;

    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("\nEnter %d values : \n",size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    sort(a,size);

    printf("\nSorted array will be :\n");

    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    return 0;
}


void sort(int a[], int n){
    int i,j,temp;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
