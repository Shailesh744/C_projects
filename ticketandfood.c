#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define global variables
int ticketPrice = 10;
int popcornPrice = 5;
int sodaPrice = 3;
int ticketsSold = 0;
int popcornSold = 0;
int sodaSold = 0;
int totalRevenue = 0;

// Function to display the main menu
void displayMenu() {
    printf("Welcome to the Movie Theater!\n");
    printf("1. Buy movie ticket\n");
    printf("2. Buy popcorn\n");
    printf("3. Buy soda\n");
    printf("4. View sales report\n");
    printf("5. Exit\n");
}

// Function to buy a movie ticket
void buyTicket() {
    int quantity;
    printf("Movie ticket price is $%d\n", ticketPrice);
    printf("How many tickets do you want to buy? ");
    scanf("%d", &quantity);
    if (quantity <= 0) {
        printf("Invalid quantity!\n");
        return;
    }
    ticketsSold += quantity;
    totalRevenue += quantity * ticketPrice;
    printf("You bought %d tickets for a total of $%d\n", quantity, quantity * ticketPrice);
}

// Function to buy popcorn
void buyPopcorn() {
    int quantity;
    printf("Popcorn price is $%d\n", popcornPrice);
    printf("How many popcorns do you want to buy? ");
    scanf("%d", &quantity);
    if (quantity <= 0) {
        printf("Invalid quantity!\n");
        return;
    }
    popcornSold += quantity;
    totalRevenue += quantity * popcornPrice;
    printf("You bought %d popcorns for a total of $%d\n", quantity, quantity * popcornPrice);
}

// Function to buy soda
void buySoda() {
    int quantity;
    printf("Soda price is $%d\n", sodaPrice);
    printf("How many sodas do you want to buy? ");
    scanf("%d", &quantity);
    if (quantity <= 0) {
        printf("Invalid quantity!\n");
        return;
    }
    sodaSold += quantity;
    totalRevenue += quantity * sodaPrice;
    printf("You bought %d sodas for a total of $%d\n", quantity, quantity * sodaPrice);
}

// Function to view sales report
void viewSalesReport() {
    printf("Tickets sold: %d\n", ticketsSold);
    printf("Popcorn sold: %d\n", popcornSold);
    printf("Soda sold: %d\n", sodaSold);
    printf("Total revenue: $%d\n", totalRevenue);
}

// Main function to run the program
int main() {
    int choice;
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                buyTicket();
                break;
            case 2:
                buyPopcorn();
                break;
            case 3:
                buySoda();
                break;
            case 4:
                viewSalesReport();
                break;
            case 5:
                printf("Thank you for visiting the Movie Theater!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}
