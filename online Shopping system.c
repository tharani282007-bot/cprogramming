#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char orderID[10];
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;
int count = 0;


void enqueue(char id[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->orderID, id);
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
    printf("Order %s placed successfully.\n", id);
}

void dequeue() {
    if (front == NULL) {
        printf("No orders to process.\n");
        return;
    }

    struct Node* temp = front;
    printf("Order %s processed.\n", front->orderID);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
    count--;
}

void showFront() {
    if (front == NULL)
        printf("No pending orders.\n");
    else
        printf("Next order to process: %s\n", front->orderID);
}


void isEmpty() {
    if (front == NULL)
        printf("All orders are completed.\n");
    else
        printf("Orders are pending.\n");
}


void size() {
    printf("Number of pending orders: %d\n", count);
}


int main() {
    enqueue("O101");
    enqueue("O102");
    enqueue("O103");

    dequeue();
    showFront();
    size();
    isEmpty();

    return 0;
}
