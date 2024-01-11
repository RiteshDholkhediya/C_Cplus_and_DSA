// Write a function to check whether a given string is palindrome or not
#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i,l=0,k=0,flag=0;

    printf("Enter a string : ");
    gets(str1);

    for(l=0; str1[l]; l++);

    for(i=l-1; i>=0; i--){
        str2[k] = str1[i];
        k++;
    }

    for(i=0; str1[i]; i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }

    printf("\nReversed String : %s",str2);

    if(flag){
        printf("\nString is not palindrome");
    }
    else{
        printf("\nString is palindrome");
    }



    return 0;
}
