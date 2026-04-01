#include <stdio.h>
int multiply(int a, int b, int *operations) {
    // Base case: a equals 0
    if (a == 0) 
        return 0;
    // Increment the operation count for the division by 2
    (*operations)++;
    // Recursive cases
    if (a % 2 == 0)// If a is even, double the result of the recursive call
        return 2 * multiply(a / 2, b, operations);
    else// If a is odd, double the result and add b
        return 2 * multiply(a / 2, b, operations) + b;
}
int main() {
    // Input
    int a, b;
    scanf("%d %d", &a, &b);
    int operations = 0;// Counter for operations
    int result = multiply(a, b, &operations);// Call the multiplication function and store the result
    // Output the result and the number of operations
    printf("%d\n", operations);
    printf("%d\n", result);
    return 0;
}
