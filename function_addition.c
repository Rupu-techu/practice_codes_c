//CALL BY VALUE METHOD
#include<stdio.h>
void add (int, int);
int main(){
    int a,b;
    printf("enter the 1ST numbers:");
    scanf("%d",&a);
    printf("enter the 2ND numbers:");
    scanf("%d",&b);
    add (a,b);     //calling
    return 0;
}
void add (int a, int b){       //fun defination
    int s=0;
    s=a+b;
    printf("sum of values:%d",s);
}