#include<stdio.h>
int main(){
    double units, bill, extra;

    printf("Enter the units consumed : ");
    scanf("%lf",&units);

    switch(units<= 50){

        case 1: bill = units*0.50;
                break;

        default: switch(units <= 150){

                    case 1: bill = 50*0.50 +  (units-50)*0.75;
                            break;

                    default: switch(units <= 250){

                            case 1: bill = 50*0.50 + 100*0.75 + (units-150)*1.20;

                            break;

                            default: switch(units > 250){

                                case 1:  bill = 50*0.50 + 100*0.75 + 100*1.20 +  (units-250)*1.50;
                                         break;
                                default: printf("\nInvalid input");
                                         break;
                            }
                    }

                 }
                break;

    }

    bill = bill + bill* 0.20;

    printf("\nYour bill is : %.2lfRs",bill);


    return 0;
}
