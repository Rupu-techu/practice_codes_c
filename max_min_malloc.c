#include<stdio.h>
#include<malloc.h>
int main(){
    int n,max;
    printf("enter the size of the array");
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    printf("enter thr values in array");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    max=*(arr+0);
    for(int i=0;i<n;i++){
     if (*(arr+i)>max){
        max=*(arr+i);
     }
    }
    printf("the max number of the array is%d",max);
    return 0;
}