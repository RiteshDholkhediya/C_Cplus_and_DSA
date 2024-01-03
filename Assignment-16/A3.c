#include<stdio.h>
void inputArray(int a[10][10], int, int);

void printMatrix(int a[10][10], int row, int col);


int main(){

    int i,j,a[10][10], b[10][10];


    printf("Enter matrix values :\n");
    inputArray(a,3,2);

    printf("\nTranspose matrix : ");
    printMatrix(a,2,3)


    return 0;
}

void inputArray(int a[10][10], int row, int col){

    int i,j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }

}

void printMatrix(int a[10][10], int row, int col){

    int i,j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){

            if(a[i][j]<10)
                printf("%d   ",a[i][j]);
            else if(a[i][j]<100)
                printf("%d  ",a[i][j]);
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
