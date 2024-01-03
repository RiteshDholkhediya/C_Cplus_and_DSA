#include<stdio.h>
int main(){
    int a,b,hcf=1,i=2;

    printf("Enter two numbers ");
    scanf("%d %d",&a, &b);

    while(1){
        if(i>a || i>b){
            break;
        }

        if((a%i == 0) && (b%i == 0)){
            hcf = hcf*i;
            a = a/i;
            b = b/i;
            continue;
        }

        i++;

    }

    printf("HCF is %d",hcf);

    return 0;

}
