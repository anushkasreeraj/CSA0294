#include <stdio.h>
#include <string.h>
#define MAX 100
struct Task {
    char title[50];
    char desc[100];
    char deadline[20];
    int priority;
    int completed;
};
struct Task tasks[MAX];
int taskCount = 0;
void addTask() {
    printf("\n--- Add New Task ---\n");
    printf("Enter Title: ");
    scanf(" %[^\n]", tasks[taskCount].title);
    printf("Enter Description: ");
    scanf(" %[^\n]", tasks[taskCount].desc);
    printf("Enter Deadline (dd/mm/yyyy): ");
    scanf(" %[^\n]", tasks[taskCount].deadline);
    printf("Enter Priority (1-5): ");
    scanf("%d", &tasks[taskCount].priority);
    tasks[taskCount].completed = 0;
    taskCount++;
    printf("Task added successfully!\n");
}
void viewTasks() {
    printf("\n--- Task List ---\n");
    if (taskCount == 0) {
        printf("No tasks available.\n");
        return;
    }
    for (int i = 0; i < taskCount; i++) {
        printf("\nTask %d:\n", i + 1);
        printf("Title: %s\n", tasks[i].title);
        printf("Description: %s\n", tasks[i].desc);
        printf("Deadline: %s\n", tasks[i].deadline);
        printf("Priority: %d\n", tasks[i].priority);
        printf("Status: %s\n", tasks[i].completed ? "Completed" : "Pending");
    }
}

// Mark a task as completed
void markTaskCompleted() {
    int n;
    printf("\nEnter task number to mark complete: ");
    scanf("%d", &n);

    if (n < 1 || n > taskCount) {
        printf("Invalid task number!\n");
        return;
    }

    tasks[n - 1].completed = 1;
    printf("Task marked as completed!\n");
}

// Delete a task
void deleteTask() {
    int n;
    printf("\nEnter task number to delete: ");
    scanf("%d", &n);

    if (n < 1 || n > taskCount) {
        printf("Invalid task number!\n");
        return;
    }

    for (int i = n - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;

    printf("Task deleted successfully!\n");
}
