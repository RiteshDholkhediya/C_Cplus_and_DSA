#include<stdio.h>
void findVowel(char a[5][100]);
int main(){
    char a[5][100];
    int i,j;
    printf("Enter a five strings : \n");

    for(i=0; i<5; i++){
        fgets(a[i],100,stdin);
    }

    findVowel(a);






    return 0;
}


void findVowel(char a[5][100]){
    int i,j,k,c[5]={0};
    char b[] = {'a','e','i','o','u'};



    for(i=0; i<5; i++){

        for(j=0; a[i][j]; j++){

            for(k=0; b[k]; k++){
                if(a[i][j] == b[k] || a[i][j]== b[k]-32)
            }
        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ",c[i]);
    }

}
