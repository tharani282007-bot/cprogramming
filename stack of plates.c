#include <stdio.h>
#include <stdlib.h>

struct Node {
    int plateID;
    struct Node *next;
};

struct Node *top = NULL;


void push(int plateID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->plateID = plateID;
    newNode->next = top;
    top = newNode;

    printf("Plate added: P%d\n", plateID);
}


void pop() {
    if (top == NULL) {
        printf("No plates to remove\n");
    } else {
        struct Node *temp = top;
        printf("Plate removed: P%d\n", temp->plateID);
        top = top->next;
        free(temp);
    }
}


void peek() {
    if (top == NULL) {
        printf("No plates available\n");
    } else {
        printf("Top plate: P%d\n", top->plateID);
    }
}


void isEmpty() {
    if (top == NULL)
        printf("Plate stack is empty\n");
    else
        printf("Plate stack is not empty\n");
}


void size() {
    int count = 0;
    struct Node *temp = top;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Total plates in stack: %d\n", count);
}

int main() {
    
    push(1);  
    push(2);  
    push(3);  

    pop();  
    peek();   
    size();   
    isEmpty();

    return 0;
}
