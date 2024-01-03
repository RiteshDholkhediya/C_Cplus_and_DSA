#include<stdio.h>
int main(){
    int a,b,lcm=1, i=2;

    printf("Enter two numbers to find its LCM ");
    scanf("%d %d", &a,&b);

    while(a >= 1){

        if(a == 1 && b ==1 )
            break;

        else if((a%i == 0) && (b%i == 0)){
            a = a/i;
            b = b/i;
            lcm *= i;
            continue;
        }
        else if((a%i == 0)  && (b%i != 0)){

            a = a/i;
            lcm *= i;
            continue;
        }
        else if((a%i!= 0 ) && (b%i == 0)){
            b = b/i;
            lcm *= i;
            continue;
        }
        i++;
    }

    printf("LCM of two numbers is %d",lcm);

    return 0;
}
