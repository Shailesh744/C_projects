#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book {
    char title[50];
    char author[50];
    int book_id;
    int quantity;
};

struct Book books[100];
int count = 0;

void add_book() {
    printf("\nEnter book details:\n");
    printf("Title: ");
    scanf("%s", books[count].title);
    printf("Author: ");
    scanf("%s", books[count].author);
    printf("Book ID: ");
    scanf("%d", &books[count].book_id);
    printf("Quantity: ");
    scanf("%d", &books[count].quantity);
    count++;
    printf("Book added successfully.\n");
}

void display_books() {
    printf("\nList of Books:\n");
    printf("Title\tAuthor\tBook ID\tQuantity\n");
    for(int i=0; i<count; i++) {
        printf("%s\t%s\t%d\t%d\n", books[i].title, books[i].author, books[i].book_id, books[i].quantity);
    }
}

void search_book() {
    int id;
    printf("\nEnter book ID to search: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++) {
        if(books[i].book_id == id) {
            printf("\nBook found.\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Quantity: %d\n", books[i].quantity);
            return;
        }
    }
    printf("\nBook not found.\n");
}

void delete_book() {
    int id, index;
    printf("\nEnter book ID to delete: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++) {
        if(books[i].book_id == id) {
            index = i;
            break;
        }
    }
    for(int i=index; i<count-1; i++) {
        books[i] = books[i+1];
    }
    count--;
    printf("\nBook deleted successfully.\n");
}

int main() {
    int choice;
    while(1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                search_book();
                break;
            case 4:
                delete_book();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
