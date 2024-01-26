
#include<stdio.h>
#include<string.h>

void swap(char *, char *, int size);

int main(){
    char a[30], b[30];

    printf("Enter string 1 : ");
    fgets(a,30,stdin);

    printf("Enter string 2 : ");
    fgets(b,30,stdin);

    if(a[strlen(a)-1] == '\n')
        a[strlen(a)-1]='\0';

    if(b[strlen(b)-1] == '\n')
        b[strlen(b)-1]='\0';

    swap(&a,&b,30);

    printf("a = %s and b = %s",a,b);

    return 0;
}


void swap(char *p, char *q, int size){

    char temp[size];

    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);

}
