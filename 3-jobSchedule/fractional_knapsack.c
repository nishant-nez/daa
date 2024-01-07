#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double weight;
    double value;
} Item;


double fractional_knapsack(int n, Item items[], double capacity) {

    double total_value = 0.0;
    int current_index = 0;

    while (capacity > 0 && current_index < n) {
        if (items[current_index].weight <= capacity) {
            // Take the whole item and update the current weight and total value
            capacity -= items[current_index].weight;
            total_value += items[current_index].value;
        } else {
            // Take a fractional part of the item and update the current weight and total value
            double fraction = capacity / items[current_index].weight;
            total_value += fraction * items[current_index].value;
            capacity = 0;
        }
        current_index++;
    }

    return total_value;
}

int main() {
	printf("Nishant Khadka\nRoll: 1017\n\n");
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    Item items[n];
    printf("Enter the weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &items[i].weight, &items[i].value);
    }

    double capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%lf", &capacity);

    double max_value = fractional_knapsack(n, items, capacity);
    printf("Maximum value in the knapsack: %.2lf\n", max_value);

    return 0;
}