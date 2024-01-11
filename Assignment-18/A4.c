// Write a function to transform string into uppercase
#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a string : ");
    fgets(str,100,stdin);

    for(int i=0; str[i]; i++){
        if(str[i]>='a' && str[i]<='z')
            str[i] -= 32;
    }

    printf("\nUpperCase string : %s",str);

    return 0;
}
