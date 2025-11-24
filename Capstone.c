#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

// Function to convert string to uppercase
void toUpper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

// Task Structure
struct Task {
    int id;
    char name[50];
    char description[100];
    char dueDate[20];
    char priority[10];
    char status[20];   // PENDING / COMPLETED
};

struct Task tasks[MAX];
int count = 0;

// Add Task
void addTask() {
    printf("\nEnter Task ID: ");
    scanf("%d", &tasks[count].id);

    printf("Enter Task Name: ");
    scanf(" %[^\n]", tasks[count].name);

    printf("Enter Task Description: ");
    scanf(" %[^\n]", tasks[count].description);

    printf("Enter Due Date (dd-mm-yyyy): ");
    scanf("%s", tasks[count].dueDate);

    printf("Enter Priority (High/Medium/Low): ");
    scanf("%s", tasks[count].priority);

    strcpy(tasks[count].status, "PENDING");  // default

    count++;
    printf("Task Added Successfully!\n");
}

// View Tasks
void viewTasks() {
    if (count == 0) {
        printf("\nNo tasks available.\n");
        return;
    }

    printf("\n------ TASK LIST ------\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d\n", tasks[i].id);
        printf("Name: %s\n", tasks[i].name);
        printf("Description: %s\n", tasks[i].description);
        printf("Due Date: %s\n", tasks[i].dueDate);
        printf("Priority: %s\n", tasks[i].priority);
        printf("Status: %s\n", tasks[i].status);
    }
}

// Update Task Status
void updateTask() {
    int id, found = 0;
    char newStatus[20];

    printf("\nEnter Task ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tasks[i].id == id) {
            printf("Enter new status (Pending/Completed): ");
            scanf("%s", newStatus);

            toUpper(newStatus); // convert to uppercase
            strcpy(tasks[i].status, newStatus);

            printf("Status Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Task not found!\n");
}

// Delete Task
void deleteTask() {
    int id, found = 0;

    printf("\nEnter Task ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tasks[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                tasks[j] = tasks[j + 1];
            }
            count--;
            printf("Task Deleted Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Task not found!\n");
}

// Productivity Calculation
void showProductivity() {
    if (count == 0) {
        printf("\nNo tasks available.\n");
        return;
    }

    int completed = 0;

    for (int i = 0; i < count; i++) {
        char temp[20];
        strcpy(temp, tasks[i].status);
        toUpper(temp);

        if (strcmp(temp, "COMPLETED") == 0)
            completed++;
    }

    float productivity = (completed * 100.0) / count;

    printf("\n------ PRODUCTIVITY REPORT ------\n");
    printf("Total Tasks: %d\n", count);
    printf("Completed: %d\n", completed);
    printf("Productivity: %.2f%%\n", productivity);
}

int main() {
    int choice;

    do {
        printf("\n\n====== DAILY PLANNER MENU ======\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Update Task\n");
        printf("4. Delete Task\n");
        printf("5. Show Productivity %%\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: updateTask(); break;
            case 4: deleteTask(); break;
            case 5: showProductivity(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}
