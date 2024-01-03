#include<stdio.h>

int combination(int, int);
int fact(int);
void printPascalTriangle(int);

int main(){

    int n;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    printPascalTriangle(n);

}


void printPascalTriangle(int n){

    int i,j,m,k,r;



    m = 2*n-1;


    for(i=0; i< n; i++){
            k=1;
            r=0;
        for(j=0; j< m; j++){

            if(j>=(n-1)-i && j<=n-1+i){

                if(k){
                    printf("%d",combination(i,r));
                    r++;
                    k=0;
                }else{
                    printf(" ");
                    k=1;
                }

            }else{
                printf(" ");

            }

        }

        printf("\n");
    }

}


int combination(int n, int r){

    int comb;

    comb = fact(n)/(fact(r)*fact(n-r));

    return comb;

}

int fact(int num){
    int fact = 1;

    if(num == 0){
        return 1;
    }

    while(num){

        fact = fact*num--;
    }

    return fact;

}
