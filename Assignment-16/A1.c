#include<stdio.h>

void inputArray(int a[3][3], int size);

int main(){
    int a[3][3], b[3][3], c[3][3], i,j;

    inputArray(a,3);
    inputArray(b,3);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrix is : \n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


void inputArray(int a[3][3], int size){

    int i,j;

    printf("\nEnter elements of 2d array\n");

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &a[i][j]);
        }
    }

}
