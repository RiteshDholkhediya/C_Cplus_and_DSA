// Write a function to transform string into lowercase
#include<stdio.h>

int main(){
    char str[100];

    printf("Enter a string : ");
    fgets(str,100,stdin);

    for(int i=0; str[i]; i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    }

    printf("\nLower Case string : %s",str);

    return 0;
}

