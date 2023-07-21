#include <stdio.h>

int fibonacci(int n) {
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 3] + dp[i - 2];

    return dp[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}
