
#include<stdio.h>
void inputArray(int a[10][10], int, int, int*);

void printMatrix(int a[10][10], int row, int col);


int main(){

    int i,j,a[10][10], b[10][10], row, col, count=0;



    printf("Enter matrix rows and columns :\n");
    scanf("%d%d",&row,&col);

    if(row!=col){
        printf("Rows and column must be same");
        return 0;
    }


    printf("\nEnter array values : \n");
    inputArray(a,row,col,&count);

    printf("\nEntered Matrix : \n");

    printMatrix(a,row,col);


    if((row*col)/2 < count)
        printf("\nThis is sparse matrix and total zero's  found : %d", count);
    else
        printf("\nThis is not sparse matrix and total zero's count : %d",count);



    return 0;
}

void inputArray(int a[10][10], int row, int col, int *count){

    int i,j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                *count += 1;
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

