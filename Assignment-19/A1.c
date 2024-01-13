#include<stdio.h>
void findVowel(char a[5][100]);
int main(){
    char a[5][100];
    int i,j;
    printf("Enter a five strings : \n");

    for(i=0; i<5; i++){
        fgets(a[i],100,stdin);
    }




    return 0;
}


void findVowel(char a[5][100]){
    int i,j;
    char b[] = {'a','e','i','o','u'};

}
