#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int x = arr[i];
        int j = i - 1;
        
        while (j >= 0 && x < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = x;
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

    insertionSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
