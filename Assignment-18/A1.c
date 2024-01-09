#include<stdio.h>
int strLen(char []);

int main(){

    char str[100];
    int l;

    printf("Enter the string : ");
    gets(str);

    l=strLen(str);

    printf("length of the string %d",l);
    return 0;
}


int strLen(char str[]){

    int i=0;

    for(i=0;i<str[i];i++);

    return i;

}
