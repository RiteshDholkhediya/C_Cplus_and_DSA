// Write a function to count words in a given string
#include<stdio.h>
int countWord(char str1[]);
int main(){
    char str[400];
    int count;

    printf("Enter a string : ");
    gets(str);

    count = countWord(str);


    printf("\nTotal number of words  : %d", count);


   // printf("\nChanged string : %s",str);

    return 0;
}


int countWord(char str1[]){

    char str[400];

    strcpy(str,str1);
    int countWord=1,spaces=0,i,l;

    for(l=0; str[l]; l++);

    for(i=0; str[i]; i++){
        if(str[i]== ' ')
            str[i] = '\n';
        else
            break;
    }

    for(i=l-1; i>=0; i--){
        if(str[i]== ' '){
            str[i]='\n';
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
