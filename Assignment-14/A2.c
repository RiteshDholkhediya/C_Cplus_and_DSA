#include<stdio.h>
int main(){

    int a[10],i;
    double avg, sum=0.0;

    printf("Enter 10 numbers\n");

    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }

    avg = sum/i;

    printf("Average of the 10 numbers is %.2lf", avg);

    return 0;
}
