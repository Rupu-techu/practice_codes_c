#include<stdio.h>
int main(){
int n;
printf("enter the number of eleemnts in array:");
scanf("%d",&n);
int arr[n];
printf("enetr the elements ");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("the array is ");
for (int i=0;i<n;i++){
printf("%d      ",arr[i]);
}
printf("\neven position eleemnts:\n");
for (int i=0;i<n;i++){
    if(i%2==0){
        printf("%d   ",arr[i]);
    }
}
printf("\nOdd position elements:\n");
for (int i = 0; i < n; i++) {
    if (i % 2 != 0) {  // index 1, 3, 5... are "odd positions"
        printf("%d ", arr[i]);
    }
}
return 0;
}