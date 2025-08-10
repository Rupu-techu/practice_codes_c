#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], c = 0; // Declare the array and initialize 'c'
    printf("Enter the elements: ");
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Frequency counting
    for (int i = 0; i < n; i++) {
        
        // Skip elements already counted (marked)
        if (arr[i] == -999999) {
            continue;  
        }

        c = 0; // Reset frequency counter for each element

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                c++;
                // Mark duplicates (excluding the first occurrence)
                if (i != j) {
                    arr[j] = -999999; // Mark duplicate with an unused value
                }
            }
        }

        // Print the frequency of the current element
        printf("The frequency of the element %d is: %d\n", arr[i], c);
    }

    return 0;
}
