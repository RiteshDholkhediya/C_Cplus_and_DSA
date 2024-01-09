#include<stdio.h>

void revString(char []);
int main(){
    char str[100];


    printf("Enter a string : ");
    gets(str);

    revString(str);

    printf("\nReversed String : %s",str);

    return 0;
}


void revString(char str[]){

    char rev[100];
    int l=0,i,k=0;

    for(;str[l];l++);

    for(i=l-1; i>=0; i--){
        rev[k++] = str[i];
    }

    for(i=0; rev[i]; i++){
        str[i] = rev[i];
    }

}
