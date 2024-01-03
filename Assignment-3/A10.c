#include<stdio.h>
int main(){
    int costPrice, sellPrice, gain;
    double percent;

    printf("Enter cost price ");
    scanf("%d",&costPrice);

    printf("Enter selling price ");
    scanf("%d", &sellPrice);

    gain = sellPrice- costPrice; // costPrice * x/100 = gain or x = (gain*100)/ costPrice

    percent  = (gain*100.0) / costPrice;

    if(percent > 0){
        printf("You have gained %.2lf profit", percent);
    }else if(percent < 0)
        printf("You lost %.2lf",percent);
    else
        printf("Neither profit or loss");


    return 0;

}

