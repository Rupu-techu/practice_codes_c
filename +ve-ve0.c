#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0){
        printf("the positive number is:%d",a);
    }else if(a<0){
        printf("the negative number is:%d",a);
    }else{
        printf("the number is 0");
    }
    return 0;
}