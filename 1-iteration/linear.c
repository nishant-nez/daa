#include <stdio.h>

int linearSearch(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    printf("Name: Nishant Khadka\nRoll: 1017\n\n");

    int size, x;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int index = linearSearch(arr, size, x);

    if (index != -1) {
        printf("Element %d found at index %d\n", x, index);
    } else {
        printf("Element %d not found in the array\n", x);
    }

    return 0;
}
