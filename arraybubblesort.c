#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int arr[n], t ; // Declare the array and initialize 'c'
    printf("Enter the elements:\n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;



            }
        }
    }
    //printing the sorted list
    printf("sorted list\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d",arr[i]);
    }
    return 0;
}