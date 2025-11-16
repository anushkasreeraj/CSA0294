//merge two files into a third file
#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char file1[100], file2[100], file3[100];
    char ch;

    printf("Enter first file name : ");
    scanf("%s", file1);

    printf("Enter second file name : ");
    scanf("%s", file2);

    printf("Enter destination file name : ");
    scanf("%s", file3);

    f1 = fopen(file1, "r");
    if (f1 == NULL) {
        printf("Error: Cannot open %s\n", file1);
        return 1;
    }

    f2 = fopen(file2, "r");
    if (f2 == NULL) {
        printf("Error: Cannot open %s\n", file2);
        fclose(f1);
        return 1;
    }

    f3 = fopen(file3, "w");
    if (f3 == NULL) {
        printf("Error: Cannot create %s\n", file3);
        fclose(f1);
        fclose(f2);
        return 1;
    }

    // Copy contents of first file into destination file
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // Copy contents of second file into destination file
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("\nFile Merging Successful\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
