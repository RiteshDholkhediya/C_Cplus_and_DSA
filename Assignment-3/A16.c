#include<stdio.h>
int main(){
    char a;

    printf("Enter a character : ");
    scanf("%c", &a);

    if(a >= 65 && a<=90)
        printf("Uppercase alphabet : %c",a);
    else if(a >=97 && a <= 122)
        printf("Lowercase alphabet : %c",a);
    else if(a >= 48 && a<= 58){
        printf("It is a digit : %c",a);
    }
    else
        printf("It is a special character : %c",a);


    return 0;
}


