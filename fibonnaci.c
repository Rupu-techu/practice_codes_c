#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0, n;
    printf("Enter the range: ");
    scanf("%d", &n);

    // Handle edge cases for small values of n
    if (n == 1) {
        printf("%d\n", a);
        return 0;
    } else if (n == 2) {
        printf("%d, %d\n", a, b);
        return 0;
    }

    // Print the first two numbers
    printf("%d, %d", a, b);

    // Loop from 3rd position to nth position
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(", %d", c);  // Fixed: Added comma for clarity
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
