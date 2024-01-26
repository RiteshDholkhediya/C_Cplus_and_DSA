#include<stdio.h>
#include<string.h>

//Create an authentication system. It should be menu driven

int main(){
    int chances = 4, i,j, ch, found=0;
    char email[][30] = {"ritesh@gmail.com", "hitesh@gmail.com", "lakshay@gmail.com", "himanshu@gmail.com"}, em[30];
    char pass[][30] = {"1234@ritesh", "2323Hitesh", "22002Lak", "2323Himanshu"}, pwd[30];

    while(chances--){

        found=0;
        printf("\n1.Login");
        printf("\n2.Exit");

        scanf("\n%d",&ch);

        switch(ch){

            case 1: fflush(stdin);
                    printf("\nEnter your email : ");
                    gets(em);

                    printf("\nEnter your password : ");
                    gets(pwd);

                    for(i=0; i<4; i++){
                        if(strcmp(email[i], em) == 0 && strcmp(pass[i],pwd) == 0){
                            printf("\nYou are authenticated");
                            found=1;
                            exit(0);
                            break;
                        }
                    }

                    if(!found){
                        printf("\nWrong email or password");
                        printf("\nYou have %d chances left", chances);
                    }

                    break;
            case 2: exit(0);

            default: printf("\nWrong choice");
                     chances++;

        }


    }


    return 0;
}
