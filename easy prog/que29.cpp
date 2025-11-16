#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    char subject[200];
    int book_id;
};

// Function to display book details
void display(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Title   : %s\n", b.title);
    printf("Author  : %s\n", b.author);
    printf("Subject : %s\n", b.subject);
    printf("Book ID : %d\n", b.book_id);
}

int main() {
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); // To clear newline from buffer

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter the Book %d title : ", i + 1);
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Enter the Book %d Author: ", i + 1);
        fgets(books[i].author, sizeof(books[i].author), stdin);

        printf("Enter the Book %d subject : ", i + 1);
        fgets(books[i].subject, sizeof(books[i].subject), stdin);

        printf("Enter the Book %d book_id : ", i + 1);
        scanf("%d", &books[i].book_id);
        getchar(); // clear leftover newline
    }

    // Display all books
    for (i = 0; i < n; i++) {
        display(books[i]);
    }

    return 0;
}
