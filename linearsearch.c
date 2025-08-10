#include<stdio.h>
int main (){
    int a[10],*p,f=0,k;
    printf("enter the values in array");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("enter a value to search");
    scanf("%d",&k);
    for (int i=0;i<10;i++){
        if (*p==k){
            f=1;
            break;
        }
        p++;
    }
    if (f==1){
        printf("searching sucessfull");
    }
    else{
    printf("not succesfull");
    }
 return 0;   
}