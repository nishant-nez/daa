#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int A[], int l, int r) {
    int x = l;
    int y = r;
    int p = A[l];
    
    while (x < y) {
        while (A[x] <= p)
            x++;
        while (A[y] >= p)
            y--;
        if (x < y)
            swap(&A[x], &A[y]);
    }
    
    A[l] = A[y];
    A[y] = p;
    return y;
}

void Quicksort(int A[], int l, int r) {
    if (l < r) {
        int p = Partition(A, l, r);
        Quicksort(A, l, p - 1);
        Quicksort(A, p + 1, r);
    }
}

int main() {
    printf("Nishant Khadka\n");
    printf("Roll: 1017\n\n");

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Quicksort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
