#include<stdio.h>

int smallestNumber(int [], int);


int main(){
    int a[100],i,size, max;

    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("\nEnter %d values : \n",size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    max = smallestNumber(a,size);

    printf("\nSmallest number is %d",max);


    return 0;
}

int smallestNumber(int a[], int size){
    int i,min;

    min=a[0];

    for(i=1; i<size; i++){
        if(min>a[i])
            min = a[i];
    }

    return min;

}
