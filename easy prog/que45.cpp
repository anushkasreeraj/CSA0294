//input file and then displayy
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100] = "output.txt";
    char text[500];

    // Take input from user
    printf("Enter text to input: ");
    getchar();  // Clear buffer (optional depending on compiler)
    fgets(text, sizeof(text), stdin);

    // Open file in write mode
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write text to file
    fputs(text, fp);
    fclose(fp);

    // Display information on screen
    printf("\nInformation written on Screen:\n\n");
    printf("%s", text);

    return 0;
}

