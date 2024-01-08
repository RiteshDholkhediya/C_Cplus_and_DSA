
#include<stdio.h>
int main(){
    char str[100];
    char temp = 'A';
    int i,j,n;

    printf("Enter a string : ");
    fgets(str,100,stdin);

    for(n=0; str[n]; n++);

    for(i=0; i<n-1; i++){

        for(j=0; j<n-1-i;j++){

            if(str[j] > str[j+1]){
                temp = str[j];
                str[j] = str[j+1];
                str[j+1]=temp;
            }

        }
    }


    printf("\nConverted string : %s",str);

    return 0;
}
