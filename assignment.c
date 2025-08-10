#include <stdio.h>

int main() {
    int num, firstDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the first digit
    num = num % 100; 

    // Extract the last digit
   firstDigit = num / 10; 

    // Combine the digits to form the new number
   

    printf("Number after deleting the second digit: %d\n",firstDigit);

    return 0;
}