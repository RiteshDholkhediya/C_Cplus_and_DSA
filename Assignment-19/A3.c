#include<stdio.h>
#include<string.h>

int main(){
    char str[5][50];
    int i,j;

    printf("Enter 5 strings : ");
    for(i=0; i<5; i++){
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1] = '\0';
    }

    for(i=0; i<5; i++){
        printf("\n%s", str[i]);
    }

    return 0;
}
