#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks obtainesd:\n");
    scanf("%d", & marks);
    if(marks>30){
    printf("passed\n");  
    }else{
    printf("fail\n");    
    }
    return 0;
}
