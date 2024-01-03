#include<stdio.h>
int main(){
    int a,b,c, d;

    printf("Enter coefficients of the quadratic equations");
    scanf("%d %d %d",&a,&b,&c);

    d = b*b - 4*a*c;

    if(d>0){
        printf("Roots are real and distinct and discriminant value is %d",d);

    }
    else if(d < 0){
        printf("Roots are imaginary and discriminant value is %d", d);

    }
    else{
        printf("Roots are real and equal and discriminant value is %d",d);
    }

    return 0;
}

// this is solution of 3 and 4 questions


