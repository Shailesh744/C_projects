#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
};

struct Contact contacts[100];
int a = 0;

void add_contact() {
    printf("\nEnter contact details:\n");
    printf("Name: ");
    scanf("%s", contacts[a].name);
    printf("Phone: ");
    scanf("%s", contacts[a].phone);
    a++;
    printf("Contact added successfully.\n");
}

void display_contacts() {
    printf("\nList of Contacts:\n");
    printf("Name\tPhone\n");
    for(int i=0; i<a; i++) {
        printf("%s\t%s\n", contacts[i].name, contacts[i].phone);
    }
}

void search_contact() {
    char name[50];
    printf("\nEnter contact name to search: ");
    scanf("%s", name);
    for(int i=0; i<a; i++) {
        if(strcmp(contacts[i].name, name) == 0) {
            printf("\nContact found.\n");
            printf("Name: %s\t", contacts[i].name);
            printf("Phone: %s\t", contacts[i].phone);
            return;
        }
    }
    printf("\nContact not found.\n");
}

void delete_contact() {
    char name[50];
    int index;
    printf("\nEnter contact name to delete: ");
    scanf("%s", name);
    for(int i=0; i<a; i++) {
        if(strcmp(contacts[i].name, name) == 0) {
            index = i;
            break;
        }
    }
    for(int i=index; i<a-1; i++) {
        contacts[i] = contacts[i+1];
    }
    a--;
    printf("\nContact deleted successfully.\n");
}

int main() {
    int choice;
    while(1) {
        printf("\nPhone-book Application\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                add_contact();
                break;
            case 2:
                display_contacts();
                break;
            case 3:
                search_contact();
                break;
            case 4:
                delete_contact();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
