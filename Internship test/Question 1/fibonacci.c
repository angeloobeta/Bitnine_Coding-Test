#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    TypeTag type;
} Node;

typedef enum TypeTag {
    INT,
    ADD,
    SUB,
    MUL,
    DIV
} TypeTag;

// Function to perform arithmetic operations on two integers
int performOperation(int a, int b, TypeTag operation) {
    switch (operation) {
        case ADD:
            return a + b;
        case SUB:
            return a - b;
        case MUL:
            return a * b;
        case DIV:
            return a / b;
        default:
            return 0;
    }
}

// Fibonacci function using dynamic programming
int fibonacci(int n) {
    int* dp = (int*)malloc((n + 1) * sizeof(int));

    // Base cases
    dp[0] = 0;
    dp[1] = 1;

    // Calculate Fibonacci numbers from 2 to n
    for (int i = 2; i <= n; i++) {
        dp[i] = performOperation(dp[i - 1], dp[i - 2], ADD);
    }

    int result = dp[n];
    free(dp);
    return result;
}

int main() {
    int n;
    printf("Enter the value of n to get the nth Fibonacci number: ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, fib);

    return 0;
}
