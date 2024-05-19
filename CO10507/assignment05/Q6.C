#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[50];
    char author[50];
    int id;
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Enter book title: ");
        scanf(" %[^\n]", library[bookCount].title);
        printf("Enter book author: ");
        scanf(" %[^\n]", library[bookCount].author);
        library[bookCount].id = bookCount + 1;
        bookCount++;
    } else {
        printf("Library is full\n");
    }
}

void displayBooks() {
    if (bookCount == 0) {
        printf("Library is empty\n");
        return;
    }
    printf("Library books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", library[i].id, library[i].title, library[i].author);
    }
}

void listBooksByAuthor() {
    char author[50];
    printf("Enter author name: ");
    scanf(" %[^\n]", author);
    int found = 0;
    printf("Books by author %s:\n", author);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("ID: %d, Title: %s\n", library[i].id, library[i].title);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for author %s\n", author);
    }
}

void countBooks() {
    printf("Total books in library: %d\n", bookCount);
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                listBooksByAuthor();
                break;
            case 4:
                countBooks();
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);
    return 0;
}
