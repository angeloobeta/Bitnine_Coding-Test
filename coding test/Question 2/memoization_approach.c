#include <stdio.h>

int memo[100];

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    
    if (memo[n] == 0)
        memo[n] = fibonacci(n - 3) + fibonacci(n - 2);

    return memo[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}
