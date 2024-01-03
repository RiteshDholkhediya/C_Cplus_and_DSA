#include<stdio.h>
int main(){
    char c;
    printf("Enter a alphabet to check whether it is lowercase or uppercase : ");
    scanf("%c",&c);

    if(c >= 65 && c <= 90)
        printf("%c is in uppercase",c);
    else if(c >= 97 && c <= 122){
        printf("%c is in lowercase",c);
    }else
    printf("%c is not a alphabet", c);

    return 0;
}
