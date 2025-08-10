#include <stdio.h>

int main() {
    int a[5], b[5];
    
    // Input values into array 'a'
    printf("Enter the values:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Copying array 'a' into array 'b'
    for (int i = 0; i < 5; i++) {
        b[i] = a[i];  // This is the correct direction
    }

    // Print the copied array
    printf("Copied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
