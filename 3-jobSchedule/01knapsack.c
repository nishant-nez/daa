#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int values[], int weights[], int n, int capacity) {
    int dp[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int main() {
	printf("Nishant Khadka\nRoll: 1017\n\n");
    printf("Enter the number of items: ");
    int n;
    scanf("%d", &n);

    printf("Enter the capacity of the knapsack: ");
    int capacity;
    scanf("%d", &capacity);

    int values[n];
    int weights[n];

    printf("Enter the values of %d items:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    printf("Enter the weights of %d items:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    int maxValue = knapsack(values, weights, n, capacity);
    printf("Maximum value that can be obtained: %d\n", maxValue);

    return 0;
}
