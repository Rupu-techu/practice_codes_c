#include<stdio.h>
int main(){
    int r,c;
    printf("enter num of rows of array\n");
    scanf("%d",&r);
    printf("enter num of columns of array\n");
    scanf("%d",&c);
    int arr[r][c],s=0,m=0;
    printf("enter the values\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }   
    }printf("the matrix is\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }   printf("\n");

}
printf("the sum is:");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        s=s+arr[i][j];
        m=m*arr[i][j];
    }
}
printf("%d ",s);
return 0;
}

