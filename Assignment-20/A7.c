//Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

int main(){

    char str[50], *s;
    int i,j, vowel=0, conso = 0 ;

    printf("Enter a string : ");
    fgets(str,50,stdin);

    s = str;

    for(i=0; s[i]; i++){

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowel ++;
        }else if((s[i] > 'a' && s[i] <= 'z') || (s[i] > 'A' && s[i] <= 'Z')){
            conso++;
        }
    }


    printf("Total no. of vowel : %d\nTotal no. of consonants : %d", vowel, conso);


}

