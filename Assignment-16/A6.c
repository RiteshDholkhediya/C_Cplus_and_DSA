

#include<stdio.h>
void inputArray(int a[10][10], int, int);

void printMatrix(int a[10][10], int row, int col);


int main(){

    int i,j,a[10][10], b[10][10], row, col, sum=0,rowSum[10], colSum[10];



    printf("Enter matrix rows and columns :\n");
    scanf("%d%d",&row,&col);


    printf("\nEnter array values : \n");
    inputArray(a,row,col);

    printf("\nEntered Matrix : \n");

    printMatrix(a,row,col);

    for(i=0; i<row; i++){
        sum=0;
        for(j=0; j<col; j++){

            sum = sum + a[i][j];
        }
        rowSum[i] = sum;
    }



    for(j=0; j<col; j++){
        sum=0;
        for(i=0; i<row; i++){
            sum = sum + a[i][j];
        }
        colSum[j]=sum;
    }



    for(i=0;i<row;i++){
        printf("\nRow %d : %d",i+1,rowSum[i]);
    }
    for(i=0;i<col;i++){
        printf("\nCol %d : %d",i+1,colSum[i]);
    }


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
