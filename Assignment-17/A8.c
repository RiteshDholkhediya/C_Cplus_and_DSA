//Write a program in C to copy one string to another string.
#include<stdio.h>
int main(){
    char str[100], str2[100], l,i;

    printf("Enter a string : ");

    fgets(str,100,stdin);


    for(l=0; str[l]; l++);

    for(i=0; i<l; i++){
        str2[i] = str[i];

    }


    printf("\nCopied string is : %s",str2);
    return 0;
}
