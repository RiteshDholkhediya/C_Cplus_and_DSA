#include<stdio.h>

int countDuplicate(int [], int);

int main(){
    int a[100], i,size, dupVal;
    printf("Enter size of array : ");
    scanf("%d",&size);

    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }

    dupVal = countDuplicate(a,size);

    printf("No. of duplicate values in array is %d",dupVal);

    return 0;

}

int countDuplicate(int a[], int size){
    int b[size],c[size],duplicate=0,i,j,k=0,flag;

    for(i=0; i<size; i++){

        if(i==0)
            b[k]=a[i];
        else{

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
    }


    for(i=0; i<=k; i++){
        c[i] = 0;
        for(j=0; j<size; j++){
            if(b[i] == a[j]){
                c[i] = c[i]+1;
            }
        }
    }

    for(i=0; i<=k; i++){
        if(c[i]>1)
            duplicate++;
    }

    printf("\nValue of K = %d\n",k);

    return duplicate;

}
