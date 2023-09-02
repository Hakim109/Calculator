#include "Calculate.h"

// Factorial function
long long factorial(int n) {
    long long fact = 1; // Initialize fact to 1, as the factorial of 0 and 1 is 1

    printf("\nType the number to perform factorial: ");
    scanf("%d", &n); // Read the input number directly into 'n'

    if (n < 0) {
        printf("No factorial for negative numbers.\n");
        return -1; // Return an error code (-1) to indicate failure
    } else if (n == 0 || n == 1) {
        printf("Factorial for %d is 1.\n", n);
    } else {
        // Calculate the factorial using a loop
        for (int i = 2; i <= n; i++) {
            fact *= i; // Multiply fact by i in each iteration
        }
        printf("Factorial for %d is: %lld\n", n, fact);
    }

    // Store the operation in history (assuming you have a function named 'history')
    char operation[1000];
    snprintf(operation, sizeof(operation), "%d! = %lld", n, fact);
    history(operation);

    return fact;
}

