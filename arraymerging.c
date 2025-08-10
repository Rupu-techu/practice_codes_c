#include<stdio.h>
int main (){
    int n,a,b;
    printf("enter the no. elememt of 1st array\n");
    scanf("%d",&a);
    printf("enter the no. elememt of 2nd array\n");
    scanf("%d",&b);
   n=a+b;
   int arr1[a],arr2[b],m[n];
   printf("enter value of 1st array\n");
   for (int i=0;i<a;i++){
       scanf("%d",&arr1[i]);
   } 
   printf("enter value of 2nd array\n");
        for (int i=0;i<b;i++){
    scanf("%d",&arr2[i]);
         }
   for(int i=0;i<n;i++){
    if (i<a){
        m[i]=arr1[i];
    }else{
        m[i]=arr2[i-a];
    }

   }
printf("the merged array is:\n");
for(int i=0;i<n;i++){
    printf("%d ",m[i]);
}return 0;
}