// Write a program to count vowels in a given string
#include<stdio.h>

int main(){
    int count=0;
    char str[100], vowel[]="aeiouAEIOU";

    printf("Enter the string : ");
    fgets(str,100,stdin);

    for(int i=0; str[i]; i++){
        for(int j=0; vowel[j]; j++){
            if(str[i] == vowel[j]){

                count++;
                printf("\n%c and %d , index : %d",str[i],count,i);
            }

        }
    }

    printf("\nCount of vowels in given strings : %d",count);

    return 0;
}
