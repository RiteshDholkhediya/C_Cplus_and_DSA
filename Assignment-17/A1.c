#include<stdio.h>
//Write a program to calculate the length of the string. (without using built-in method)
int main(){
    char str[100];
    int i;
    printf("Enter the string : ");
    fgets(str,100,stdin); // it counts line-feed(\n) also when pressing enter button

    for(i=0; str[i]; i++);

    printf("\nSize of the string is : %d",i-1);



    return 0;
}
