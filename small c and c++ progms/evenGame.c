#include<stdio.h>
int main(){
    int chances = 3, n;
    int flag = 0;

    while(chances >= 1){

        printf("Enter even number ");
        scanf("%d",&n);
        if(n%2 == 0){
            flag = 1;
            break;
        }
        chances--;

    }

    if(flag){
        printf("You Won");
    }else
        printf("Game over");

        return 0;

}
