#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[50];
    int i, len;
    long long n, fact = 1;

    printf("Enter N: ");
    scanf("%s", input);

    len = strlen(input);

    // -------- Validate Input --------
    for (i = 0; i < len; i++) {

        // allow '-' only in first position
        if (i == 0 && input[i] == '-')
            continue;

        // if any non-digit found → invalid
        if (!isdigit(input[i])) {
            printf("Invalid Input!\n");
            return 0;
        }
    }

    // convert valid string to integer
    sscanf(input, "%lld", &n);

    // -------- Handle conditions --------
    if (n < 0) {
        printf("Factorial is not defined for negative numbers!\n");
        return 0;
    }

    if (n == 0 || n == 1) {
        printf("1\n");   // factorial of 0 and 1 is 1
        return 0;
    }

    // -------- Calculate Factorial --------
    for (i = 2; i <= n; i++)
        fact *= i;

    printf("%lld\n", fact);

    return 0;
}
