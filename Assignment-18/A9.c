// Write a function to count words in a given string
#include<stdio.h>
#include<string.h>

int length(char []);
void reverseWords(char str[]);
void reverseString(char str[]);


int main(){
    char str[400];
    int count;

    printf("Enter a string : ");
    fgets(str,400,stdin);

    reverseWords(str);

    printf("\n%s",str);

    return 0;
}



void reverseString(char str[]){

    int i=0,j=length(str)-1;
    char temp;

    while(i<=j){

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

}

void reverseWords(char str[]){

    char temp[400];
    int i=0,j=0,k=0, len=length(str);

    while(i<len){

        strcpy(temp,"");
        k=0;

       while(str[i] != ' '){

         temp[k++] = str[i];
         i++;
       }

       temp[k] = '\0';
       reverseString(temp);
       k=0;

       while(temp[k]){

         str[j] = temp[k++];
         j++;
       }

        i++;
        j++;

    }

    reverseString(str);


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

// note: its logic is discussed in '17Aug doubt clearing class' at timestamp 1:00:00
