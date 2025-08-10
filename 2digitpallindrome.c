#include<stdio.h>
int main (){
    int a,b,c;
    printf("\nenter the number:\n");
    scanf("%d",&a);
    b=a%10;
    c=b*10+(a/10);
    printf("\nenter the number:%d",c);
    return 0;
}