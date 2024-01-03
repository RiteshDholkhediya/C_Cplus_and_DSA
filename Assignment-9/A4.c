#include<stdio.h>
int main(){
    int ch,a,b,c;

    while(1){

        printf("\n1. Check whether given set of three numbers are lengths of an isosceles triangle or not ");
        printf("\n2. Check whether given set of three numbers are lengths of sides of a right triangle or not");
        printf("\n3. Check whether given set of three numbers are equilateral triangle or not");
        printf("\n4. Exit");

        printf("\nEnter your choice ");
        scanf("%d",&ch);

        switch(ch){

            case 1: printf("\nEnter three numbers ");
                    scanf("%d%d%d",&a,&b,&c);

                    if(a == b || b==c || c==a)
                        printf("Triangle is Isosceles\n");
                    else

                        printf("Not isosceles\n");
                    break;

            case 2: printf("\nEnter three numbers ");
                    scanf("%d%d%d",&a,&b,&c);

                    if((a*a + b*b) == c*c || (a*a + c*c) == b*b || (b*b + c*c) == a*a )
                        printf("It is a right angle triangle ");
                    else
                        printf("Not a right angle triangle");
                    break;

            case 3: printf("\nEnter three numbers ");
                    scanf("%d%d%d",&a,&b,&c);

                    if(a==b && b==c)
                        printf("Triangle is equilateral ");
                    else
                        printf("Not a equilateral triangle");
                    break;

            case 4: exit(0);

            default: printf("\nEnter a valid choice");

        }


    }

    return 0;

}
