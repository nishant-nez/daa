#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int weights[] = {2, 3, 4, 5};
int values[] = {3, 5, 6, 10};
int n = sizeof(weights) / sizeof(weights[0]);
int capacity = 8;

int backtrackKnapsack(int i, int currentWeight, int currentValue) {
    if (i < 0 || currentWeight < 0) {
        return 0;
    }

    if (currentWeight == 0) {
        return currentValue;
    }

    // Try including the current item.
    int includeItem = 0;
    if (weights[i] <= currentWeight) {
        includeItem = values[i] + backtrackKnapsack(i - 1, currentWeight - weights[i], currentValue);
    }

    // Try excluding the current item.
    int excludeItem = backtrackKnapsack(i - 1, currentWeight, currentValue);

    return max(includeItem, excludeItem);
}

int main() {
    printf("Nishant Khadka\nRoll:1017\n\n");
    int result = backtrackKnapsack(n - 1, capacity, 0);
    printf("Maximum value in the knapsack: %d\n", result);
    return 0;
}   