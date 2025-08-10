#include<stdio.h>
int main(){
    char opt;
    int a,b;
    printf("\npress 1 for even function\n");
    printf("\npress 2 for leap year\n");
    scanf("%c",&opt);
    switch (opt){
        case '!' :
        printf("\nenter the number\n");
        scanf("%d",&a);
        if (a%2==0){
            printf("\neven\n");
        }else{
            printf("\nodd\n");
        }break;
        case'#':
        printf("\nenter the year\n");
        scanf("%d",&b);
        if (b%4==0 || b%400==0 || b%100==0){
        printf("leap year");
        }else{
            printf("not leap yaer");
        }break;
        default:
        printf("invalid");
        return 0;


    }
}