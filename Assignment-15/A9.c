#include<stdio.h>
void inputArray(int a[], int);
void sortDesc(int a[],int size);
void mergeArray(int a[], int b[], int c[], int size);


int main(){
    int a[100],b[100],c[200],size, i,j;

    printf("Enter size of an array : ");
    scanf("%d",&size);

    printf("\nEnter first array values : ");

    inputArray(a, size);

    printf("\nSecond first array values : ");

    inputArray(b,size);

    mergeArray(a,b,c,size);

    printf("\nMerged array : \n");

    for(i=0; i<size*2; i++)
        printf("%d ",c[i]);


    return 0;
}

void inputArray(int a[], int size){
    int i;
    printf("\nEnter values : \n");
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
}

void sortDesc(int a[],int size){
    int i,j, temp;

    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){

            if(a[j]<a[j+1]){
                temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void mergeArray(int a[], int b[], int c[], int size){
    int i,j;

    for(i=0; i<size; i++){
        c[i] = a[i];
    }

    for(j=0; j<size; j++){
        c[i] = b[j];
        i++;
    }

    sortDesc(c, size*2);

}
