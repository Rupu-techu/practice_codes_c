//CALL BY VALUE 
#include<stdio.h>
void swap(int,int);
int main(){
    int a,b;
    printf("enter the 1ST numbers:");
    scanf("%d",&a);
    printf("enter the 2nd numbers:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value 1st number:%d\n",a);
    printf("the value 2nd number:%d\n",b);
}
