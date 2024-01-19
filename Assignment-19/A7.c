#include<stdio.h>
#include<string.h>

int main(){
    char str[][30] = {"123.12.1.0", "2.34.234.1", "s2.344.22.4", "33,.34.34.2", "2.2.3.2.2.3"};
    int i,j,len;


    for(i=0; i<5; i++){

            printf("\n%s",str[i]);

    }




    return 0;
}
