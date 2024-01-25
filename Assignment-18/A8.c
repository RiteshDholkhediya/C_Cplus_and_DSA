// Write a function to count words in a given string
#include<stdio.h>
#include<string.h>

int countWord(char str1[]);
int main(){
    char str[400];
    int count;

    printf("Enter a string : ");
    gets(str);

    count = countWord(str);


    printf("\nTotal number of words  : %d", count);

    printf("\nString : %s", str);

    return 0;
}


int countWord(char str1[]){

    char str[400];

    strcpy(str,str1);
    int countWord=1,spaces=0,i,l;


    // find the length of the string
    for(l=0; str[l]; l++);


    // remove spaces from starting
    for(i=0; str[i]; i++){
        if(str[i]== ' ')
            str[i] = '\r'; // this will remove the space and cursor will be at initial position
        else
            break;
    }


    // remove spaces from ending
    for(i=l-1; i>=0; i--){
        if(str[i]== ' '){
            str[i]='\0';
        }
        else
            break;
    }

    for(i=0; str[i]; i++){

        if(str[i]==' '){
            spaces++;
        }else{

            if(spaces > 0){
                countWord++;
                spaces=0;
            }
        }

    }

    return countWord;

}
