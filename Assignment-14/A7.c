#include<stdio.h>
int main(){
    int a[10],i,j,temp, secondLargest,size=10 ;

    printf("Enter 10 numbers\n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<10-1; i++){

        for(j=0; j< 10-1-i; j++){
            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    secondLargest = a[i-1];

    while(size){
        if(secondLargest != a[size-1]){
             break;
        }
        else{
            size--;
            secondLargest = a[size-1];
        }

    }

    printf("\nSecond largest number in array : %d",secondLargest);

    return 0;
}
