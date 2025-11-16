#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Input file name
    printf("Enter the name of file for reading: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File not found or cannot be opened.\n");
        return 1;
    }

    printf("\n---- File Contents ----\n");

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
