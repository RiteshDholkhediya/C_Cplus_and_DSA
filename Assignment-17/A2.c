#include<stdio.h>

// Write a program to count the occurrence of a given character in a given string.

int main(){
    char str[100], letter;
    int count=0,i;

    printf("Enter the string : ");
    fgets(str,100,stdin);

    printf("Enter the character to find its occurrence in given string : ");
    scanf("%c",&letter);

    for(i=0;str[i];i++){
        if(str[i]==letter)
            count++;
        if(str[i]=='\n')
            str[i] = '\0';
    }


    printf("Occurrence of \'%c\' in \'%s\' is %d",letter,str,count);

    return 0;
}
