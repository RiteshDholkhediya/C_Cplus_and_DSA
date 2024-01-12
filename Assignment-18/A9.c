// Write a function to count words in a given string
#include<stdio.h>
int countWord(char str1[]);
int length(char []);
void reverseWords(char str[], int words);


int main(){
    char str[400];
    int count;

    printf("Enter a string : ");
    fgets(str,400,stdin);


    count = countWord(str);

    reverseWords(str, count);


    return 0;
}


int countWord(char str1[]){

    char str[400];

    strcpy(str,str1);
    int countWord=1,spaces=0,i,l;

    //for(l=0; str[l]; l++);

    l=length(str);

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

void reverseWords(char str[], int words){

    char str2[500], arr[words][400];
    int i,j,k=0;

    for(i=0; i<words; i++){
        k=0;
        for(j=0; str[j]; j++){

            if(str[j] == ' '){
                continue;
            }
            else{
                if(str[j]==' '){

                    arr[words][k] = ' ';
                    arr[words][k+1] = '\0';
                    break;

                }
                arr[words][k++] = str[j];

            }


        }
    }


    for(i=0; i<words; i++){

        for(j=0; arr[words][j]; j++){

            printf("%c",arr[words][j]);
        }
        printf("\n");
    }


}


int length(char str[]){
    int l;

    for(l=0; str[l]; l++);

    if(str[l-1]=='\n'){
        str[l-1] = '\0';
        return l-1;
    }

    return l;

}
