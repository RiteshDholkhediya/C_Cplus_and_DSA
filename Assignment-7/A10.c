#include<stdio.h>
#include<math.h>
int main(){

    int n=1,temp, count, sum;


   while(n<= 1000){

    temp = n;
    count=0;
    sum=0;

    while(temp){
       temp /=10;
       count++;
    }

    temp=n;

    while(temp){
      sum = sum + pow(temp%10,count);
      temp = temp/10;
    }

    if(sum == n){
        printf("%d ", n);
    }
    n++;

   }

    return 0;


}
