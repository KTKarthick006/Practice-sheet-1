#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    float cost;
    int accessionNumber;
};

void displayBooksByAuthor(struct Book books[], int n, char author[]) {
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

void displayBooksByPublisher(struct Book books[], int n, char publisher[]) {
    printf("Books published by %s:\n", publisher);
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

void displayBooksByCost(struct Book books[], int n, float minCost) {
    printf("Books costing Rs. %.2f and above:\n", minCost);
    for (int i = 0; i < n; i++) {
        if (books[i].cost >= minCost) {
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
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Publisher: ");
        scanf(" %[^\n]s", books[i].publisher);
        printf("Cost: ");
        scanf("%f", &books[i].cost);
        books[i].accessionNumber = i + 1;
        printf("\n");
    }

    int choice;
    char author[100];
    char publisher[100];
    float minCost;

    do {
        printf("Menu:\n");
        printf("1. Books of a specific author\n");
        printf("2. Books by a specific publisher\n");
        printf("3. All books costing Rs. 500 and above\n");
        printf("4. All books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the author name: ");
                scanf(" %[^\n]s", author);
                displayBooksByAuthor(books, n, author);
                break;
            case 2:
                printf("Enter the publisher name: ");
                scanf(" %[^\n]s", publisher);
                displayBooksByPublisher(books, n, publisher);
                break;
            case 3:
                printf("Enter the minimum cost: ");
                scanf("%f", &minCost);
                displayBooksByCost(books, n, minCost);
                break;
            case 4:
                displayAllBooks(books, n);
                break;
            case 5:
                printf("Thank you\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
