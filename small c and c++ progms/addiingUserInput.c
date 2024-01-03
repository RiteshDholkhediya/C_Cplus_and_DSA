#include<stdio.h>
int main(){
    int n, sum = 0;

    while(1){
        printf("Enter a number : ");
        scanf("%d", &n);

        if(n)
            sum += n;
        else
            break;
    }

    printf("Total of entered values : %d",sum);

    return 0;

}
