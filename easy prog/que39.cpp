//copy contents of a file to another 
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcFile[100], destFile[100];
    char ch;
    int byteCount = 0;

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy contents byte-by-byte
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
        byteCount++;
    }

    printf("\n%d bytes copied from '%s' to '%s'\n", byteCount, srcFile, destFile);

    fclose(src);
    fclose(dest);

    printf("2 files closed\n");

    return 0;
}
