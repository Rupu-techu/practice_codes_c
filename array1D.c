#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("\n\n\nenter the elments\n\n\n");
        scanf("%d",&arr[i]);
        
    }
    for (int i=0;i<n;i++){
    printf("\n\n%d",arr[i]);
    }
    return 0;
    }