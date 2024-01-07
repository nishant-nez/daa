#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minj = i;
        int minx = arr[i];

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < minx) {
                minj = j;
                minx = arr[j];
            }
        }

        arr[minj] = arr[i];
        arr[i] = minx;
    }
}

int main() {
    printf("Name: Nishant Khadka\nRoll: 1017\n\n");

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
