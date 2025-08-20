#include <stdio.h>
#include <string.h>
#include "library.h"

void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Cannot add more books!\n");
        return;
    }

    Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Title: ");
    scanf(" %[^\n]", b.title); // accept spaces
    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);
    printf("Enter Year: ");
    scanf("%d", &b.year);

    books[*count] = b;
    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    printf("\n--- Book List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Author: %s | Year: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

void searchBook(Book books[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Found -> ID: %d | Title: %s | Author: %s | Year: %d\n",
                   books[i].id, books[i].title, books[i].author, books[i].year);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

void deleteBook(Book books[], int *count, int id) {
    for (int i = 0; i < *count; i++) {
        if (books[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}
