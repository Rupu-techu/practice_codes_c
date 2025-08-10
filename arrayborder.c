#include<stdio.h>
int main(){
int rows,column;
    printf("enter num of rows of array\n");
    scanf("%d",&rows);
    printf("enter num of columns of array\n");
    scanf("%d",&column);
    int arr[rows][column];
    printf("enter the elements in 2d array\n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthe 2d array /matrix is:\n\n"); 
    for (int i=0;i<rows;i++){
       for (int j=0;j<column;j++){
           printf("%d  ",arr[i][j]);
       }printf("\n");
   }
   printf(" the border element\n");
   for (int i=0;i<rows;i++){
    for (int j=0;j<column;j++){
        if(i==0||j==0||i==rows-1||j==column-1){
            printf("%d   ",arr[i][j]);
        }else{
            printf("    ");
        }
    }printf("\n");
}return 0;
}
