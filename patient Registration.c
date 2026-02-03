#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char patientID[10];
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;


int isEmpty() {
    return front == NULL;
}


void enqueue(char id[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->patientID, id);
    newNode->next = NULL;

    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Patient %s registered\n", id);
}


void dequeue() {
    if (isEmpty()) {
        printf("No patients waiting\n");
        return;
    }

    struct Node* temp = front;
    printf("Patient attended: %s\n", front->patientID);
    front = front->next;
    free(temp);

    if (front == NULL)
        rear = NULL;
}


void displayFront() {
    if (isEmpty())
        printf("No patient is being attended\n");
    else
        printf("Current patient: %s\n", front->patientID);
}


int size() {
    int count = 0;
    struct Node* temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    enqueue("P1");
    enqueue("P2");
    enqueue("P3");

    dequeue();
    displayFront();

    printf("Patients waiting: %d\n", size());

    return 0;
}
