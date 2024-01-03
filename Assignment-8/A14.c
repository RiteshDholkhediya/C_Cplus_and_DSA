#include<stdio.h>
int main(){

    int i,j,k,n;

    printf("Enter a number ");
    scanf("%d", &n);



    for(i=1; i<=n; i++){


        for(j=1; j<=n; j++){

            if(j==1 || j ==i){
                printf("* ");
            }
            else if(i==n){
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
