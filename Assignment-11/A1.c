#include<stdio.h>

int findLcm(int , int);

int main(){
    int a,b,lcm;

    printf("Enter value 1 : ");
    scanf("%d",&a);

    printf("Enter value 2 : ");
    scanf("%d", &b);

    lcm = findLcm(a,b);

    printf("LCM of %d, %d : %d", a,b,lcm);

    return 0;
}


int findLcm(int a, int b){
    int lcm=1, i=2 ;


    while(1){

        if(a%i==0 && b%i==0){
            lcm *= i;
            a = a/i;
            b = b/i;
            continue;
        }
        else if(a%i == 0 && b%i != 0){

            lcm *=i;
            a = a/i;
            continue;
        }
        else if(b%i == 0 && a%i!= 0){
            lcm = lcm*i;
            b = b/i;
            continue;
        }

        if(a==1 && b==1)
            break;

        i++;

    }

    return lcm;
}


