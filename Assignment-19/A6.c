// Write a program to print the strings which are palindrome in the list of strings

#include<stdio.h>
#include<string.h>

void inputTwoDString(char a[][50], int);

void reverse(char a[], int size){

    char b[size];
    int i,j=0,len;

    strcpy(b,a);

    len = strlen(a);

    for(i=len-1; i>=0; i--){
        a[j++] = b[i];
    }

}


int isPalindrome(char a[]){

    int i,j,len,flag=1;

    len = strlen(a);

    if(len==1)
        return flag;
    else{
        j=len-1;
        for(i=0; i<=len/2; i++){
            if(a[j--]!= a[i]){
                flag=0;
                break;
            }
        }
    }

    return flag;

}

int main(){
    char str1[10][50],str2[10][50] ;
    int i, flag=0;


    printf("Enter 5 string :\n");
    inputTwoDString(str1,5);


    for(i=0; i<5; i++){

        flag = isPalindrome(str1[i]);

        if(flag){
            printf("\n%s",str1[i]);
        }

    }

    return 0;
}

void inputTwoDString(char a[][50], int size){

    int i;
    for(i=0; i<size; i++){

        fgets(a[i],50,stdin);

        if(a[i][strlen(a[i])-1]=='\n')

            a[i][strlen(a[i])-1] = '\0';

    }

}
