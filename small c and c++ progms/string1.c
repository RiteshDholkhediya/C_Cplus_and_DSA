#include<stdio.h>
int main(){
    int i;
    char str[10] = "BHOPAL";

    for(i=0;str[i];i++);

    printf("Length of the string %s is %d",str,i);

    return 0;
}
