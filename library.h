#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_BOOKS 100

typedef struct {
    int id;
    char title[50];
    char author[50];
    int year;
} Book;

void addBook(Book books[], int *count);
void displayBooks(Book books[], int count);
void searchBook(Book books[], int count, int id);
void deleteBook(Book books[], int *count, int id);

#endif
