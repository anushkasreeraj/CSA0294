//reverse ch in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char *buffer;
    long size;
    int n;

    // Check correct usage
    if (argc != 3) {
        printf("Usage: %s <filename> <n>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    n = atoi(argv[2]);   // number of characters to reverse

    // Get file size
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    // Read file content
    buffer = (char*) malloc(size + 1);
    fread(buffer, 1, size, fp);
    buffer[size] = '\0';

    fclose(fp);

    // If n > file size, adjust n
    if (n > size)
        n = size;

    // Reverse first n characters
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = buffer[i];
        buffer[i] = buffer[j];
        buffer[j] = temp;
    }

    // Print result
    printf("Output:\n%s\n", buffer);

    free(buffer);
    return 0;
}
