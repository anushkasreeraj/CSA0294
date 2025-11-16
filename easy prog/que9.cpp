#include <stdio.h>
int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0) {
        printf("Invalid Input!\n");
        return 0;
    }
    for (i = 1; i <= rows; i++) {

        // print leading spaces (2 spaces each)
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // print numbers from i down to 1
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
