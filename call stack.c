#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char functionName[20];
    struct Node *next;
};

struct Node *top = NULL;


void push(char name[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->functionName, name);
    newNode->next = top;
    top = newNode;

    printf("Function called: %s\n", name);
}

void pop() {
    if (top == NULL) {
        printf("No function to return from\n");
    } else {
        struct Node *temp = top;
        printf("Function ended: %s\n", temp->functionName);
        top = top->next;
        free(temp);
    }
}


void peek() {
    if (top == NULL) {
        printf("No function is currently executing\n");
    } else {
        printf("Current function: %s\n", top->functionName);
    }
}


void isEmpty() {
    if (top == NULL)
        printf("Program execution completed (Call stack empty)\n");
    else
        printf("Program is still running\n");
}


void size() {
    int count = 0;
    struct Node *temp = top;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Active function calls: %d\n", count);
}

int main() {
    push("main");
    push("func1");
    push("func2");

    pop();    
    peek();   
    size();   
    isEmpty();

    return 0;
}
