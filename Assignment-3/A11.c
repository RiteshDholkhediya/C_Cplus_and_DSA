#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,total, minimumPassing ;

    printf("Enter marks of five subjects : ");
    scanf("%f %f %f %f %f", &m1,&m2,&m3,&m4,&m5);

    /*
    total = m1 + m2 + m3 + m4 + m5;

    minimumPassing = 500 * (33.0/100);


     if(total >= minimumPassing){
        printf("Student passed the exam and scored %.2f marks out of 500",total);
     }
     else{
        printf("Minimum %.2f marks are required to pass the exam out of 500\n", minimumPassing);
        printf("Student failed the exam and scored %.2f marks out of 500",total);
     }

     */

     if(m1>=33 && m2 >= 33 && m3>= 33 && m4 >= 33 && m5 >= 33){
        printf("Passed");
     }else{
        printf("Fail");
     }
     return 0;

}
