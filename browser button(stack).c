#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;


void push(int pageID) {
    if (top == MAX - 1) {
        printf("History is full\n");
    } else {
        stack[++top] = pageID;
        printf("Opened page: %d\n", pageID);
    }
}


void pop() {
    if (top == -1) {
        printf("No pages to go back\n");
    } else {
        printf("Back pressed, removed page: %d\n", stack[top--]);
    }
}


void peek() {
    if (top == -1) {
        printf("No current page\n");
    } else {
        printf("Current page: %d\n", stack[top]);
    }
}


void isEmpty() {
    if (top == -1)
        printf("History is empty\n");
    else
        printf("History is not empty\n");
}


void size() {
    printf("Total pages in history: %d\n", top + 1);
}

int main() {
   
    push(101);
    push(102);
    push(103);

    pop();
    peek();
    size();     
    isEmpty();  

    return 0;
}
