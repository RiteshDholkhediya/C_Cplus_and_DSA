#include<stdio.h>
int main(){
    int i,j,k,n, ch;

    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        ch=64;
        k=1;

        for(j=1; j<=2*n-1; j++){

            if(j <= n+1-i || j>= n-1+i){

               if(k<= n+1-i){

                printf("%c ",++ch);
                k++;
               }
               else{
                if(i>1){
                    printf("%c ",ch--);
                }else
                    printf("%c ",--ch);

               }

            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

}
