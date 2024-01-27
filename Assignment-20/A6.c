// Write a program to calculate the length of the string using a pointer
#include<stdio.h>

int main(){
    char a[50];

    printf("Enter a string : ");
    fgets(a,50,stdin);

    printf("Length of the string is %d",findLength(a));
    return 0;

}


int findLength(char *ptr){
    int i;

    for(i=0; ptr[i]; i++);

    if(ptr[i-1] == '\n')
        i;

    return i+1;

}
