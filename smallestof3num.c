#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter ther three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c){
        printf("the smallest num is:%d",a);
    }else if (b<a && b<c){
        printf("the smallest num is:%d",b);
    }else if (c<b && c<a){
        printf("the smallest num is:%d",c);
    }return 0;

}
