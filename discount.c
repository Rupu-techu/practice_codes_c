#include<stdio.h>
float main(){
    float d=0.05,p,price,dp;
    printf("enter the price:");
    scanf("%f",&p);
    dp=p*d;
    printf("the discounted price is:%f\n",dp);
    price=p-dp;
    printf("the final price is:%f",price);
    return 0;
}