#include<stdio.h>
#include<string.h>

void sort(char c[10][50], int size);


int main(){
    char cities[10][50];
    int i,j;

    printf("Enter 10 cities names :\n");

    for(i=0; i<10; i++){
        fgets(cities[i],50,stdin);
    }

    for(i=0; i<10; i++){
        cities[i][strlen(cities[i])-1] = '\0';
    }

    sort(cities,10);

    for(i=0; i<10; i++){

        printf("\n%s",cities[i]);

    }
    return 0;

}


void sort(char c[10][50], int size){

    int i,j, l1,l2, small,k;
    char temp[50];

    for(i=0; i<size-1; i++){

        for(k=0; k<(size-1-i); k++){

            l1 = strlen(c[k]);
            l2 = strlen(c[k+1]);

            small = l1<l2?l1:l2;

            for(j=0; j<small; j++){

                if(c[k][j] > c[k+1][j]){
                    strcpy(temp,c[k]);
                    strcpy(c[k],c[k+1]);
                    strcpy(c[k+1], temp);
                    break;
                }
                else if(c[k][j] < c[k+1][j]){
                    break;
                }

            }

        }


    }

}

