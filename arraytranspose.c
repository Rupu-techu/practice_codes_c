#include<stdio.h>
int main(){
    int r,c;
    printf("enter num of rows of array\n");
    scanf("%d",&r);
    printf("enter num of columns of array\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the values\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\noriginal matrix\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }printf("\n");
    }
    printf("\n\nthe transposed matrix is:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d  ",arr[j][i]);
        }printf("\n");
    }
    return 0;
}