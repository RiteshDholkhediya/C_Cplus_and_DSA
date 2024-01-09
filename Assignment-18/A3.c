#include<stdio.h>
#include<string.h>

int cmpString(char str1[], char []);

int main(){
    char str1[100], str2[100];
    int order=0;

    printf("Enter String 1 : ");
    fgets(str1,100,stdin);

    printf("Enter String 2 : ");
    fgets(str2,100,stdin);

    order = cmpString(str1,str2);

    printf("\nstrcmp function value : %d",strcmp(str1,str2));
    printf("\nmy function value : %d",order);

    return 0;
}

int cmpString(char str1[], char str2[]){

    int l1=strlen(str1), l2=strlen(str2),order=0 ;

    if(l1 < l2){
        for(int i=0; str1[i]; i++){
            if(str1[i] < str2[i]){
                order = -1;
                printf("\n%c",str1[i]);
                break;
            }

            else if(str1[i] > str2[i]){
                order = 1;
                printf("\n%c",str1[i]);
                break;
            }

        }
    }else{

        for(int i=0; str2[i]; i++){
            if(str2[i] < str1[i]){
                order = -1;
                printf("\n%c",str2[i]);
                break;
            }

            else if(str2[i]> str1[i]){
                order = 1;
                printf("\n%c",str2[i]);
                break;

            }

        }
    }

    return order;
}


