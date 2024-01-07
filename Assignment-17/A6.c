#include<stdio.h>
// Write a program to reverse a string.


int main(){
    char str[100], rev[100];
    int i,j, count=0;

    printf("Enter a string : ");
    gets(str);

    for(i=0; str[i]; i++);

    for(j=i-1; j>=0; j--){
        rev[count] = str[j];
        count++;
    }

    printf("\nReversed string : %s", rev);

    return 0;
}
