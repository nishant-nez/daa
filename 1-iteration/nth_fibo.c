#include <stdio.h>

int fibonacci(int n) {
    int first = 0, second = 1, temp;

    if (n == 1)
        return first;
    else if (n == 2)
        return second;

    for (int i = 3; i <= n; i++) {
        temp = first + second;
        first = second;
        second = temp;
    }

    return second;
}

int main() {
    printf("Name: Nishant Khadka\nRoll: 1017\n\n");

    int term;
    printf("Enter the term of the Fibonacci number: ");
    scanf("%d", &term);

    int result = fibonacci(term);

    printf("Fibonacci number at term %d is: %d\n", term, result);

    return 0;
}
