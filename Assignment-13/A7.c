#include<stdio.h>
int findHcf(int, int);

int main(){
    int n1,n2, hcf;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1, &n2);

    hcf = findHcf(n1,n2);
    printf("HCf of %d and %d is %d", n1,n2,hcf);

    return 0;
}

int findHcf(int n1, int n2){

    if(n2==0)
        return n1;
    else{
        return findHcf(n2,n1%n2);
    }
}
