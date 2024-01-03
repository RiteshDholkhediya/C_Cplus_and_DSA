#include<stdio.h>

void inputArray(int a[], int);
void countFrequency(int a[], int size);

int main(){
    int a[100],i,j,size;

    printf("Enter size of an array : ");
    scanf("%d",&size);

    inputArray(a,size);

    countFrequency(a,size);

    return 0;

}

void inputArray(int a[], int size){
    int i;
    printf("\nEnter values : \n");
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
}


void countFrequency(int a[], int size){
    int i,j,b[size],c[size],k=0,flag;

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
            b[++k] = a[i];
        }

    }

    for(i=0; i<=k; i++){
            c[i]=0;
        for(j=0; j<size; j++){
            if(b[i]==a[j]){
                c[i]= c[i]+1;
            }
        }
    }

    for(i=0; i<=k; i++){
        printf("\n%d : %d times",b[i],c[i]);
    }

    printf("\nValue of k is %d",k);

}
