//divisibility by 5
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",& num);
    if(num>1){
    printf("positive \n");    
    }else{
    printf("number negative\n ");
    }if(num%1==0 && num%5==0){
    printf("the number is divisible by 5\n");    
    }else{
    printf("the number isnot divisible by 5\n");
    }
    return 0;
}