#include<stdio.h>
int main(){
    int a, i=0;
    printf("Enter a number");
    scanf("%d",&a);

    while((a&1) != 1){
        a = a>>1;
        i++;
    }

    printf("Position of bit 1 at %d from right",i+1);

    return 0;
}
