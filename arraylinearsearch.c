#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elemnts:");
    scanf("%d",&n);
    int arr[n],key,f=0;
    printf("enter the elements:");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value to be searched:");
    scanf("%d",&key);
    for (int i=0;i<n;i++){
    if (arr[i]==key){
        f=1;
        break;
    }
}
if (f==1){
        printf("search found");
    }else{
        printf("search not found");

    }return 0;

    }
    
