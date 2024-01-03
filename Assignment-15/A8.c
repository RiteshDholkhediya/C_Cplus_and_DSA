#include<stdio.h>
void inputArray(int a[], int);
void printUniqueElements(int a[], int);


int main(){
    int a[100],size, i,j;

    printf("Enter size of an array : ");
    scanf("%d",&size);

    inputArray(a, size);

    printUniqueElements(a,size);

    return 0;
}

void inputArray(int a[], int size){
    int i;
    printf("\nEnter values : \n");
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
}


void printUniqueElements(int a[], int size){
   int b[size],k=0,i,j,flag;

   b[0] = a[0];

   for(i=0; i<size; i++){
        flag=0;
        for(j=0; j<=k; j++){
            if(a[i]==b[j]){
                flag=1;
                break;
            }

        }

        if(!flag){
            b[++k]=a[i];
        }
   }

   printf("\nUnique elements of an array : \n");

   for(i=0; i<=k; i++){
    printf("%d ", b[i]);
   }



}
