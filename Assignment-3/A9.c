#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);


    if(a > b){
        if(a>c){
            printf("Greater among three is %d",a );
        }else
            printf("Greater among three is %d",c );
    }else if(b > c){

        printf("Greater among three is %d",b );
    }else

        printf("Greater among three us %d",c);


    return 0;

}
