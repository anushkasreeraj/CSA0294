#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;

    printf("Enter Name of file to open for reading: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");   // Try to open the file

    if (fp == NULL) {
        printf("The file is not found.\n");
    } else {
        printf("File opened successfully.\n");
        fclose(fp);
    }

    return 0;
}
