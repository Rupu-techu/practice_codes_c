#include<stdio.h>
void count (int [],int);
int main(){
    int n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements are:   ");
    for(int i=0;i<n;i++){
        printf("%d   ",arr[i]);
    }
    count(arr,n);
    return 0;
}
void count(int arr[],int n){
    int eve=0;int odd=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            eve=eve+1;
        }
        else{
            odd=odd+1;
        }

}
printf("\nnumber of even in the array \n%d",eve);
printf("\nnumber of odd in the array \n%d",odd);
}