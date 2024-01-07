#include <stdio.h>

int gcd(int a, int b) {
    int r;
    
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else {
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}

int main() {
    int num1, num2;
	
	printf("Name: Nishant Khadka\nRoll: 1017\n\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
