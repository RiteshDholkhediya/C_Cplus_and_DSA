#include<stdio.h>
#include<string.h>
 /*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/

int fact(int num);


int main(){
    char str[][20] = {"hitesh","ritesh", "sakib", "dinesh"}, str2[20];
    int i,j,flag=0, f, num;

    printf("Enter username : ");
    fgets(str2, 20, stdin);

    if(str2[strlen(str2)-1] == '\n')
          str2[strlen(str2)-1] = '\0';

    for(i=0; i<4; i++){
        if(strcmp(str[i],str2) == 0){
            flag=1;
            break;
        }
    }


    if(flag){
        printf("\nUsername Found : ");
        printf("\nEnter a number : ");
        scanf("%d",&num);
        f = fact(num);

        printf("\nFactorial of %d is %d", num, f);

    }else{

        printf("Username not found");
    }

    return 0;
}


int fact(int num){
    int fact=1;
    while(num){
        fact = num*fact;
        num--;
    }

    return fact;
}
