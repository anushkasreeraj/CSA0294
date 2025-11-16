#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num[100];
    int i, len;

    printf("Enter a number: ");
    scanf("%s", num);

    len = strlen(num);

    // Check if input is a valid number (can start with '-')
    for (i = 0; i < len; i++) {
        if (i == 0 && num[i] == '-')   // allow negative sign
            continue;

        if (!isdigit(num[i])) {        // if any non-digit found
            printf("Invalid Input!\n");
            return 0;
        }
    }

    printf("Reverse Number: ");

    // If negative, print '-' first
    if (num[0] == '-') {
        printf("-");
        // reverse digits after '-'
        for (i = len - 1; i > 0; i--)
            printf("%c", num[i]);
    } else {
        // reverse normally
        for (i = len - 1; i >= 0; i--)
            printf("%c", num[i]);
    }

    printf("\n");
    return 0;
}
