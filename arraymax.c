#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n],max;
    printf("enter the values ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (int i=0;i<n;i++){
    if (arr[i]>max)
    max=arr[i];
}
printf("the max valueis:%d",max);
return 0;
}