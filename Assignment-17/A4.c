#include<stdio.h>
// Write a program to convert a given string into uppercase


int main(){
    char str[100];

    printf("Enter a string : ");
    fgets(str,100,stdin);

    for(int i=0; str[i]; i++){
        if(str[i]>=97 && str[i]<= 122)
            str[i] -= 32;
    }

    printf("\nConverted string : %s",str);



    return 0;
}
