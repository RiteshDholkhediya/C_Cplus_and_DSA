#include<stdio.h>
// Write a program in C to count the total number of alphabets, digits and special characters in a string.



int main(){
    char str[100];
    int  alpha=0,digits=0,special=0,i;

    printf("Enter a string : ");
    gets(str);

    for(i=0; str[i]; i++){
        if((str[i]>= 'A' && str[i] <= 'Z') || (str[i]>= 'a' && str[i] <= 'z') )
            alpha++;
        else if(str[i]>=48 && str[i] <= 57)
            digits++;
        else
            special++;
    }


    printf("\nAlphabets : %d",alpha);
    printf("\nDigits : %d",digits);
    printf("\nSpecial characters : %d",special);




    return 0;
}
