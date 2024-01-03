#include<stdio.h>
int findHcf(int , int);


int main(){
    int a,b,hcf;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    hcf = findHcf(a,b);

    printf("HCF of %d, %d is %d",a,b,hcf);

    return 0;
}

int findHcf(int a, int b){
    int hcf=1, rem;


    while(1){

        if(a>b){

           rem = a%b;
           if(rem == 0){

            hcf = b;
            break;
           }

           if( b%rem == 0 ){
                hcf = rem;
                break;
           }else{
                a = b;
                b = rem;
           }


        }else{

            rem = b%a;

            if(rem==0){
                hcf = a;
                break;
            }

            if( a%rem == 0){
                hcf = rem;
                break;
            }else{
                b = a;
                a = rem;
            }

        }

    }

    return hcf;


}
