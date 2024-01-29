#include<stdio.h>
#include<string.h>

// Write a program to print a string in reverse using a pointer

int main(){
    char a[20], temp, *q;
    int i,j, len;

    printf("Enter a string : ");
    fgets(a,20,stdin);


    q=a;

    len  = strlen(a);

    if(q[len-1] == '\n'){
        q[len-1] = '\0';
        len--;
    }


    i=0;
    j = len-1;
    while(i<=j){

        temp = q[i];
        q[i] = q[j];
        q[j] = temp;
        i++;
        j--;
    }


    printf("\n%s",q);




    return 0;
}
