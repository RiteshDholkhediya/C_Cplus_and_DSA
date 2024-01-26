#include<stdio.h>
#include<string.h>

// From the list of IP addresses, check whether all ip addresses are valid. (not completed)

int main(){
    char str[][30] = {"123.12.1.0", "2.34.234.1", "s2.344.22.4", "33,.34.34.2", "2.2.3.2.2.3"}, temp1[4][10] = {""} ;
    int i,j,k=0,len, countDot=0, valid[5] = {0}, flag=1, maxLimit;


    for(i=0; i<5; i++){

        countDot=0;
        flag=1;

        for(j=0; str[i][j]; i++){

                if(str[i][j] == '.'){
                    countDot++;

                }

                if(str[i][j] < 48 || str[i][j]>57)
                    flag=0;
        }


        if(countDot==3 && flag){

            maxLimit=0
            k=0;

            while(str[i][k++]!= '.'){
                maxLimit++;
            }

            if(maxLimit >3){
                flag=0;
            }

        }


    }


    for(i=0; i<4; i++){
        printf("\n%s",temp1[i]);
    }




    return 0;
}
