#include<stdio.h>
int main(){
    char opt;
    float a,b,c,d,s;
    printf("press + for addition:");
    printf("\npress - for subtration");
    scanf("%c",&opt);
    switch(opt)
    {
        case '+':
        printf("enter the 2 numberw");
        scanf("%f%f",&a,&b);
        s=a+b;
        printf("the result is:%f",s);
        break;
        case '-':
        printf("enter the 2 numberw");
        scanf("%f%f",&c,&d);
        s=c-d;
        printf("the result is:%f",s);
        break;
        default:
        printf("invalid");
    }
        return 0;

    }
    

