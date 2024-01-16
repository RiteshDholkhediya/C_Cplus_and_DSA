#include<stdio.h>
#include<string.h>
void findVowel(char a[][100]);
int main(){
    char a[5][100];
    int i,j;
    printf("Enter a five strings : \n");

    for(i=0; i<5; i++){
        fgets(a[i],200,stdin);
    }

    for(i=0; i<5; i++){
        a[i][strlen(a[i])-1] = '\0';
    }

    findVowel(a);

    return 0;
}


void findVowel(char a[][100]){
    int i,j,k,c[5]={0};
    char b[] = {'a','e','i','o','u'};



    for(i=0; i<5; i++){

        for(j=0; a[i][j]; j++){

            for(k=0; b[k]; k++){
                if(a[i][j] == b[k] || a[i][j]== b[k]-32)
                    c[i]++;
            }
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("\n%s : %d vowels",a[i],c[i]);
    }

}
