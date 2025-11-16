#include <stdio.h>

int main() {
    int P, Q, R;
    int num, temp, digit;

    printf("Enter P: ");
    scanf("%d", &P);

    printf("Enter Q: ");
    scanf("%d", &Q);

    printf("Enter digit R to skip: ");
    scanf("%d", &R);

    printf("\nOutput:\n");

    for (num = P; num <= Q; num++) {
        temp = num;

        // Check whether the number contains digit R
        while (temp > 0) {
            digit = temp % 10;
            if (digit == R) {
                // Skip printing using continue
                goto skip_number;
            }
            temp /= 10;
        }

        // Print the number if digit R not found
        printf("%d ", num);

        continue; 

        // Label to help skip using continue logic
        skip_number:
            continue;
    }

    printf("\n");
    return 0;
}
