#include<stdio.h>
int main(){
    int a[10],*p,max,min;
    printf("enter the values in array");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    p=&a[0];
    max=a[0];
    min=a[0];
    for (int i=0;i<10;i++){
       if(*p>max){
        max=*p;
       }
       if (*p<min){
        min=*p;
       }
        p++;
    }
    printf("\nmaximum value%d\n",max);
    printf("\nminimum value%d\n",min);
 return 0;   
}