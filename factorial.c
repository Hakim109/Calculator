#include "Calculate.h"

// Factorial function
long long factorial(int n) {
    long long fact = 1; 

    printf("\nType the number to perform factorial: ");
    scanf("%d", &n); 

    if (n < 0) {
        printf("No factorial for negative numbers.\n");
        return -1; 
    } else if (n == 0 || n == 1) {
        printf("Factorial for %d is 1.\n", n);
    } else {
        
        for (int i = 2; i <= n; i++) {
            fact *= i; 
        }
        printf("Factorial for %d is: %lld\n", n, fact);
    }

    // Store the operation in history
    char operation[1000];
    snprintf(operation, sizeof(operation), "%d! = %lld", n, fact);
    history(operation);

    return fact;
}

