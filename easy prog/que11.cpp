#include <stdio.h>

int main() {
    int M, N, i;

    printf("Enter M: ");
    scanf("%d", &M);

    printf("Enter N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N must be positive!\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        printf("%d x %d = %d\n", i, M, i * M);
    }

    return 0;
}
