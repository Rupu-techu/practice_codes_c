#include<stdio.h>
int main(){
    int a,b;
    printf("enter the 1st number:\n");
    scanf("%d",&a);
    printf("enter the 2nd number:\n");
    scanf("%d",&b);
    a=b;
    b=a;
    printf("the values are %d",a);
    printf("the values are %d",b);
    return 0;
}