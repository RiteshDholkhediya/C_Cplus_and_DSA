#include<stdio.h>
int main(){
    int i,j,n,c,k;

    printf("Enter a number ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        c=1;
        k=-1;

        for(j=1; j<=2*n-1; j++){

            if(j<=n+1-i || j>=n-1+i){

                if(c <= n+1-i){
                    printf("%d",c++);
                }else{
                    if(c > n+1-i && k<0){
                        if(j==n+1 && i==1){
                           k=c-2;
                        }
                        else{
                            k=c-1;
                        }

                    }
                    printf("%d", k--);

                }

            }else{
                printf(" ");
            }
        }
        printf("\n");
    }


}
