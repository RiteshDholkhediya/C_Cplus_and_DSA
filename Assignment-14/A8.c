#include<stdio.h>
int main(){
    int a[10],i,j,temp, secondSmallest,size=1 ;

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

    secondSmallest = a[1];

    while(size<9){
        if(secondSmallest != a[0]){
             break;
        }
        else{
            size++;
            secondSmallest = a[size];
        }

    }

    printf("\nSecond smallest number in array : %d",secondSmallest);

    return 0;
}

