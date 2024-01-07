#include <stdio.h>

void MinMax(int l, int r, int A[], int *max, int *min) {
    if (l == r) {
        *max = *min = A[l];
    } else if (l == r - 1) {
        if (A[l] < A[r]) {
            *max = A[r];
            *min = A[l];
        } else {
            *max = A[l];
            *min = A[r];
        }
    } else {
        int mid = (l + r) / 2;

        int max1, min1;
        MinMax(l, mid, A, max, min);
        MinMax(mid + 1, r, A, &max1, &min1);

        if (max1 > *max) {
            *max = max1;
        }

        if (min1 < *min) {
            *min = min1;
        }
    }
}

int main() {
    printf("Nishant Khadka\n");
    printf("Roll: 1017\n\n");

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int max, min;
    MinMax(0, n - 1, A, &max, &min);

    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
