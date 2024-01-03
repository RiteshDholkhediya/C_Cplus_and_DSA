#include<stdio.h>
int main(){
    int i,j,n,c1,c2;

    printf("Enter a number ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        c1=1;
        c2=-1;

        for(j=1; j<=2*n-1; j++){

            if(j>=i && j<=2*n-i){
                if(c1 <= n+1-i){
                    printf("%d ",c1++);
                }else{

                    if(c1> n+1-i && c2<0){
                        c2 = c1-2;
                    }
                    printf("%d ",c2--);
                }

            }

            else{
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;

}
