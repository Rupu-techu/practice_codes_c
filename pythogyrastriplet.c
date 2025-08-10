#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b )+(c*c);
    if (a*a==d){
        printf("its a pythogorian triplet");
    }else{
        printf("not");    
    }return 0;
    }