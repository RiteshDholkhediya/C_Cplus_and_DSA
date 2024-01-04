
#include<stdio.h>
void inputArray(int a[10][10], int, int);

void printMatrix(int a[10][10], int row, int col);


int main(){

    int i,j,a[10][10], b[10][10], c[10][10], row, col, sum=0;


    printf("Enter matrix rows and columns :\n");
    scanf("%d%d",&row,&col);

    if(row != col){
        printf("Rows and columns must be same to find the sum of right diagonal of matrix");
    }else{

        printf("\nEnter array values : \n");
        inputArray(a,row,col);

        printf("\nEntered Matrix : \n");

        printMatrix(a,row,col);


        for(i=0; i<row; i++){
           sum += a[row-1-i][i];
        }


        printf("Sum of the left diagonal of the given matrix is : %d",sum);

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
