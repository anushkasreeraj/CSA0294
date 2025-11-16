#include <stdio.h>

int main() {
    char filename[100];
    char input[500];
    FILE *fp;

    // Get file name
    printf("Enter the name of file for reading: ");
    scanf("%s", filename);

    // Clear input buffer before fgets
    getchar();

    // Get content to append
    printf("Enter number to append: ");
    fgets(input, sizeof(input), stdin);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Append content
    fputs(input, fp);
    fclose(fp);

    // Open file for reading and display full content
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot read file %s\n", filename);
        return 1;
    }

    printf("\nFull File Content:\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
