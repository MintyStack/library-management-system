#include <stdio.h>
#include "library.h"

int main() {
    Book books[MAX_BOOKS];
    int count = 0, choice, id;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: 
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchBook(books, count, id);
                break;
            case 4: 
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteBook(books, &count, id);
                break;
            case 5: 
                printf("Exiting...\n");
                return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
