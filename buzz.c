#include <stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a%7==0){
        printf("the number is buzz");
    }else if(a%10==7){
    printf("\nthe number is buzz");
    }else{
        printf("\nnot buzz");
    }return 0;

}