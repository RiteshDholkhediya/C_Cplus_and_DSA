#include<stdio.h>
int main(){
    int i,j,n, counter,k;

    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
            counter = 1;
            k=-1;
        for(j=1; j<=2*n-1; j++){

            if(j>=n+1-i && j<= n-1+i){
                if(counter<=i){
                    printf("%d ",counter++);

                }else{
                    if(counter > i && k<0){
                        k = counter-2;
                    }

                    printf("%d ",k--);
                }

            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
