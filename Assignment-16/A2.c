#include<stdio.h>

void inputArray(int a[10][10], int, int);
void printMatrix(int a[10][10], int row, int col);
void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int row1,int col1, int col2);

int main(){
    int a[10][10], b[10][10], c[10][10], sum, row1,row2, col1, col2;


    printf("Enter the rows no. and column number of matrix 1 : \n");
    scanf("%d%d",&row1, &col1);

    printf("Enter the rows no. and column number of matrix 2 : \n");
    scanf("%d%d",&row2, &col2);


    if(col1 != row2){
        printf("\nMultiplication of matrix not possible");
    }
    else{

        printf("\nEnter first matrix :\n");
        inputArray(a,row1,col1);

        printf("\nEnter second matrix :\n");
        inputArray(b,row2,col2);



        multiplyMatrix(a,b,c,row1, col1,col2);


        printf("\nMatrix 1 : \n");
        printMatrix(a,row1,col1);

        printf("\nMatrix 2 : \n");
        printMatrix(b,row2,col2);


        printf("\n Multiplication of two array : \n");

        printMatrix(c,row1,col2);

    }

    return 0;

}

void multiplyMatrix(int a[10][10], int b[10][10], int c[10][10], int row1,int col1, int col2){

    int i,j,k,sum;

    for(i=0; i<row1; i++){
            for(j=0; j<col2; j++){
                sum=0;
                for(k=0; k<col1; k++){

                    sum += a[i][k]*b[k][j];

                }
                c[i][j] = sum;
            }
        }

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
