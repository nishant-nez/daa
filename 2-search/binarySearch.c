#include <stdio.h>

int binary_search(int a[], int l, int r, int x) {
    int m = 0;
    int flag = 0;
    if (l <= r) {
        m = (l + r) / 2;
        if (x == a[m]) {
            flag = m;
        } else if (x < a[m]) {
            flag = binary_search(a, l, m - 1, x);
        } else {
            flag = binary_search(a, m + 1, r, x);
        }
    }
    return flag;
}

int main() {
    printf("Nishant Khadka\n");
    printf("Roll: 1017\n\n");

    int n;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int sorted_array[n];
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sorted_array[i]);
    }

    int target;
    printf("Enter the target value you want to search for: ");
    scanf("%d", &target);

    int result = binary_search(sorted_array, 0, n - 1, target);
    printf("\nTarget %d found at index: %d\n", target, result);

    return 0;
}
