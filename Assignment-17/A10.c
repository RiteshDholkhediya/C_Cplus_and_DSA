// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main(){
    char str[100];
    int freq[256] = {0},i;

    printf("Enter a string : ");
    gets(str);

    printf("\n");

    for(i=0; str[i]; i++){
        freq[str[i]]++;
    }

    for(i=0; i<256; i++){

        if(freq[i]!=0){
            printf("\n%c : %d", i,freq[i]);
        }
    }


    return 0;
}
