#include <stdio.h>
#include <string.h>

#define MAX 100

struct Task {
    char name[100];
    int completed; // 0 = pending, 1 = completed
};

int main() {
    struct Task tasks[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== SIMPLE TO-DO LIST =====\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Completed\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // to clear newline

        if (choice == 1) {
            if (count >= MAX) {
                printf("Task list full!\n");
                continue;
            }
            printf("Enter task name: ");
            fgets(tasks[count].name, 100, stdin);
            tasks[count].name[strcspn(tasks[count].name, "\n")] = 0;
            tasks[count].completed = 0;
            count++;
            printf("Task added!\n");

        } else if (choice == 2) {
            if (count == 0) {
                printf("No tasks added.\n");
            } else {
                printf("\nYour Tasks:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. %s [%s]\n", i + 1, tasks[i].name,
                           tasks[i].completed ? "Completed" : "Pending");
                }
            }

        } else if (choice == 3) {
            int n;
            printf("Enter task number to mark complete: ");
            scanf("%d", &n);
            if (n < 1 || n > count) {
                printf("Invalid task number!\n");
            } else {
                tasks[n - 1].completed = 1;
                printf("Task marked as completed!\n");
            }

        } else if (choice == 4) {
            int n;
            printf("Enter task number to delete: ");
            scanf("%d", &n);
            if (n < 1 || n > count) {
                printf("Invalid task number!\n");
            } else {
                for (int i = n - 1; i < count - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }
                count--;
                printf("Task deleted!\n");
            }

        } else if (choice == 5) {
            printf("Exiting...\n");
            break;

        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

