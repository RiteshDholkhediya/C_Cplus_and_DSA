#include<stdio.h>
#include<string.h>

int findString(char [][50], char str2[], int);

int main(){
    char str[10][50], str2[50];
    int i,j,index=-1;

    printf("Enter 5 strings : ");
    for(i=0; i<5; i++){
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1] = '\0';
    }

    printf("\nEnter string you want to find : ");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1] = '\0';



    index = findString(str,str2,5);

    if(index != -1){
        printf("\nString is at %d position", index+1);
    }else{
        printf("\nString not found");
    }


    return 0;
}




int findString(char str1[][50], char str2[], int totalString){

    int i,j,flag=0, index=-1;

    strlwr(str2);
    printf("\nEntered String : %s", str2);

    for(i=0; i<totalString; i++){
        strlwr(str1[i]);

        printf("\n%s",str1[i]);
        flag=0;
        for(j=0; str2[j]; j++){

            if(str1[i][j] != str2[j]){
                flag=1;
                break;
            }
        }

        if(!flag){
            index = i;
            break;
        }
    }

    return index;
}
