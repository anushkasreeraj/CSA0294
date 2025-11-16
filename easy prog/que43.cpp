//file manupulation
#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    FILE *fp;

    // Get file name
    printf("Enter name of file to open: ");
    scanf("%s", filename);

    // Clear input buffer before fgets
    getchar();

    // Get text to write
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    // Open file in write mode
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    } else {
        printf("The file is successfully opened.\n");
    }

    // Write text to file
    fputs(text, fp);

    // Close file
    fclose(fp);

    // Reopen file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    char buffer[500];

    // Read using fgets()
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
