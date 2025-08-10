#include <stdio.h>

// Recursive function to calculate factorial using pointer
int arm(int *n) {
    if (*n == 0 )
        return 0;
    else {
        int temp =(*n%10 );
        int d= temp*temp*temp;
        int a=*n/10;            // create a local variable
        return (d+arm(&a)); // pass pointer to temp
    }
}

int main() {
    int num,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result=arm(&num);
   if(result ==num){

    printf("Factorial of %d is %d\n", num, result);
}
else {
    printf("not arm");

}

    return 0;
}
