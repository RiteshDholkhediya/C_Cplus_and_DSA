// Suppose we have a list of email addresses, check whether all email addresses have
//‘@’ in it. Print the odd email out.

#include<stdio.h>
#include<string.h>
int main(){
    char emails[10][100];
    int i,j, flag=0;

    printf("Enter 5 strings : \n");
    for(i=0; i<5; i++){
        fgets(emails[i],100,stdin);
        emails[i][strlen(emails[i])-1] = '\0';
    }

    for(i=0; i<5; i++){

        flag=0;

        for(j=0; emails[i][j]; j++){

            if(emails[i][j]== '@'){
                flag=1;
                break;
            }

        }
        if(!flag){
            printf("\n%s",emails[i]);
        }
    }


    return 0;
}
