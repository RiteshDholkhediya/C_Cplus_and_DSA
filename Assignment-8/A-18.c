#include<stdio.h>
int main(){
    int i,j,n,m,k, calc1, calc2;


    printf("Enter values to create diamond shape : ");
    scanf("%d",&k);

    n = (k+1)/2;
    m = n-1;

    for(i=1; i<=n; i++){

        for(j=1;  j<=n-1+i; j++){ //j<=2*n-1

            if(j>=n+1-i ){
                printf("*");
            }else
                printf(" ");
        }
        printf("\n");
    }

    for(i=1; i<=m; i++){
        calc1 = 2*m+1-i;

        for(j=1;  j<=calc1; j++){ //j<=2*m+1

            if(j>=i+1){
                 printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }


return 0;

}
