//Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
int main(){
    char str[200];
    int flag1=0, flag2=0;

    printf("Enter a string : ");
    fgets(str,200,stdin);

    for(int i=0; str[i]; i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            flag1=1;
            break;
        }


    }

    for(int i=0; str[i]; i++){
        if(str[i]>='0' && str[i]<='9' ){
            flag2=1;
            break;
        }


    }

    if(flag1 && flag2)
        printf("\nString is Alphanumeric");
    else
        printf("String is not Alphanumeric");


    return 0;
}
