#include<stdio.h>
int arm(int a){
    if(a==0){
        return 0;
    }
    else{
        return ((a%10)*(a%10)*(a%10)+arm(a/10));
    }
}
int main(){
    int a, result;
    printf("enetr the number:");
    scanf("%d",&a);
    result=arm(a);
    if (result==a){
        printf("armstrong number");
    }
    else{
        printf("not armstrong");

    }
    return 0;
}