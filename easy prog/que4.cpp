#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer!\n");
        return 0;
    }

    printf("Divisors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {   // remainder is 0
            printf("%d ", i);
            sum += i;       // add divisor to sum
        }
    }

    printf("\nSum of divisors = %d\n", sum);

    return 0;
}
