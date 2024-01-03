#include<stdio.h>
int main(){
    int i,j,n,counter;

    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){

        counter=1;

        for(j=1; j<=n; j++){

            if(j>=i)
                printf("%d ",counter++);
            else
                printf("  ");

        }
        printf("\n");
    }


}
