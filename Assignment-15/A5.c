#include<stdio.h>

int firstOccurrence(int [],int);

int main(){
    int a[100],i, ele,size;

    printf("Enter total number of values : ");
    scanf("%d",&size);

    printf("\nEnter array values : \n");

    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }

    ele = firstOccurrence(a,size);

    printf("\nElement that is duplicate : %d",ele);

    return 0;
}

int firstOccurrence(int a[],int size){
    int i;

    for(i=0; i<size-1; i++){
        if(a[i]==a[i+1]){
            return a[i];
        }
    }

}

