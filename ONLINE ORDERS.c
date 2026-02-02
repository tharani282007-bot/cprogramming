#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nested structure for product details
struct Product {
    char name[30];
    int price;
};

// Structure for order node
struct Order {
    int orderID;
    struct Product p;   // nested structure
    char status[20];
    struct Order *next;
};

// Function to create a new order node
struct Order* createOrder(int id, char pname[], int price, char status[]) {
    struct Order *newOrder = (struct Order*)malloc(sizeof(struct Order));
    newOrder->orderID = id;
    strcpy(newOrder->p.name, pname);
    newOrder->p.price = price;
    strcpy(newOrder->status, status);
    newOrder->next = NULL;
    return newOrder;
}

// Function to display all orders
void display(struct Order *head) {
    struct Order *temp = head;
    while (temp != NULL) {
        printf("%d %s %d %s -> ",
               temp->orderID,
               temp->p.name,
               temp->p.price,
               temp->status);
        temp = temp->next;
    }
    printf("NULL");
}

int main() {
    struct Order *head = NULL, *second = NULL;

    // Creating orders manually (test case)
    head = createOrder(201, "Mouse", 500, "Delivered");
    second = createOrder(202, "Keyboard", 1500, "Pending");

    // Linking orders
    head->next = second;

    // Display order list
    display(head);

    return 0;
}
