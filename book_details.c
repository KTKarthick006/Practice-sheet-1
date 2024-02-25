#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    float cost;
    int accessionNumber;
};

void displayBooksByAuthor(struct Book books[], int n, const char* author) {
    printf("Books by %s:\n", author);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Accession Number: %d\n", books[i].accessionNumber);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publisher: %s\n", books[i].publisher);
            printf("Cost: Rs. %.2f\n", books[i].cost);
            printf("\n");
        }
    }
}

void displayBooksByPublisher(struct Book books[], int n, const char* publisher) {
    printf("Books by %s:\n", publisher);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].publisher, publisher) == 0) {
            printf("Accession Number: %d\n", books[i].accessionNumber);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publisher: %s\n", books[i].publisher);
            printf("Cost: Rs. %.2f\n", books[i].cost);
            printf("\n");
        }
    }
}

void displayBooksAboveCost(struct Book books[], int n, float cost) {
    printf("Books costing Rs. %.2f and above:\n", cost);
    for (int i = 0; i < n; i++) {
        if (books[i].cost >= cost) {
            printf("Accession Number: %d\n", books[i].accessionNumber);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publisher: %s\n", books[i].publisher);
            printf("Cost: Rs. %.2f\n", books[i].cost);
            printf("\n");
        }
    }
}

void displayAllBooks(struct Book books[], int n) {
    printf("All Books:\n");
    for (int i = 0; i < n; i++) {
        printf("Accession Number: %d\n", books[i].accessionNumber);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Cost: Rs. %.2f\n", books[i].cost);
        printf("\n");
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Enter the title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Enter the author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Enter the publisher: ");
        scanf(" %[^\n]s", books[i].publisher);
        printf("Enter the cost: ");
        scanf("%f", &books[i].cost);
        books[i].accessionNumber = i + 1;
    }

    int choice;
    char author[100];
    char publisher[100];
    float cost;

    do {
        printf("\nMenu:\n");
        printf("1. Books of a specific author\n");
        printf("2. Books by a specific publisher\n");
        printf("3. All books costing Rs. 500 and above\n");
        printf("4. All books\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the author: ");
                scanf(" %[^\n]s", author);
                displayBooksByAuthor(books, n, author);
                break;
            case 2:
                printf("Enter the publisher: ");
                scanf(" %[^\n]s", publisher);
                displayBooksByPublisher(books, n, publisher);
                break;
            case 3:
                printf("Enter the minimum cost: ");
                scanf("%f", &cost);
                displayBooksAboveCost(books, n, cost);
                break;
            case 4:
                displayAllBooks(books, n);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
