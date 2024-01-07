#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Maxheapify(int A[], int n, int i) {
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    
    if (l <= n && A[l] > A[largest])
        largest = l;
    if (r <= n && A[r] > A[largest])
        largest = r;
    if (largest != i) {
        swap(&A[largest], &A[i]);
        Maxheapify(A, n, largest);
    }
}

void Heapsort(int A[], int n) {
    for (int i = n / 2; i >= 1; i--) {
        Maxheapify(A, n, i);
    }
    for (int i = n; i >= 1; i--) {
        swap(&A[1], &A[i]);
        Maxheapify(A, i - 1, 1);
    }
}

int main() {
    printf("Nishant Khadka\n");
    printf("Roll: 1017\n\n");

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Using 1-based indexing for HeapSort
    printf("Enter the elements: ");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    Heapsort(arr, n);

    printf("\nSorted array: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
