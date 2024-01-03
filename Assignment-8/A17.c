#include<stdio.h>
int main(){
    int i,j,n, temp;

    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1; i<=n;i++){

        temp = 2*n-i;
        for(j=1; j<=temp; j++){

            if(j==i || j==temp)
                printf("* ");
            else if(i==1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n\n");
    }

    return 0;
}
