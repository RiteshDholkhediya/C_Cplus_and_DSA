//. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
void sort(int *ptr,  int size);


int main(){
    int a[10];

    printf("Enter 10 integer values : ");


    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sort(a,10);

    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }



}


void sort(int *ptr,  int size){

    int i,j, temp;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(ptr[j] > ptr[j+1]){
               temp = ptr[j];
               ptr[j] = ptr[j+1];
               ptr[j+1] = temp;
            }

        }
    }

}
