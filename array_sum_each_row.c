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
   printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        int s = 0;  // Reset sum for each row
        for (int j = 0; j < column; j++) {
            s = s + arr[i][j];  // Summing row elements
        }
        printf("Row %d sum: %d\n", i + 1, s);
    }
   return 0;
}