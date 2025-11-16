
//display contents of a file
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;

    printf("Enter the file name: ");
    scanf("%s", filename);   // Reads the file name

    fp = fopen(filename, "r");   // Open file in read mode

    if (fp == NULL) {
        printf("Error: File not found or cannot be opened!\n");
        return 1;
    }

    printf("\nFile Contents:\n\n");

    while ((ch = fgetc(fp)) != EOF) {  
        printf("%c", ch);   // Print the characters of the file
    }

    fclose(fp);

    return 0;
}
