#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid Input!\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d  ", i);   // two spaces for correct formatting
        }
        printf("\n");
    }

    return 0;
}
