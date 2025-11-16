//store student's data into a file
#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[50];

    fp = fopen("Student.txt", "w");   // Open file in write mode
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nEnter the roll number: ");
        scanf("%d", &roll);

        printf("Enter the name: ");
        scanf("%s", name);

        // Write to file
        fprintf(fp, "Roll No: %d\nName: %s\n\n", roll, name);
    }

    printf("\nData successfully written to Student.txt\n");

    fclose(fp);
    return 0;
}
