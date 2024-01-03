#include<stdio.h>
void rotateArray(int [], int, int, int);

int main(){
    int a[100],i,size, n,d;

    printf("Enter number of values you want to enter in array");
    scanf("%d",&size);

    printf("\nEnter values :\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEnter the number of positions you want to rotate an array : ");
    scanf("%d",&n);

    printf("\n\nEnter negative for left rotation, else for right rotation :");
    scanf("%d",&d);

    rotateArray(a,n,d,size);

    for(i=0;i<size;i++){
        printf("%d ", a[i]);
    }




}


void rotateArray(int a[], int n, int d, int size){
    int temp,i;


    if(d<0){
        while(n){

            temp = a[0];
            for(i=0; i<size;i++){
                a[i] = a[i+1];
            }
            a[i-1] = temp;
            n--;
        }
    }else{

        while(n){
            temp = a[size-1];
            for(i=size-2; i>=0; i--){
                a[i+1] = a[i];
            }
            a[0] = temp;
            n--;
        }

    }



}
