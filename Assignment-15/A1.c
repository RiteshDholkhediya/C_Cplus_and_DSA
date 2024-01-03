#include<stdio.h>

int greatestNumber(int [], int);


int main(){
    int a[100],i,size, max;

    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("\nEnter %d values : \n",size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    max = greatestNumber(a,size);

    printf("\nGreatest number is %d",max);


    return 0;
}

int greatestNumber(int a[], int size){
    int i,max;

    max=a[0];

    for(i=1; i<size; i++){
        if(max < a[i])
            max = a[i];
    }

    return max;

}
