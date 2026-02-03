#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;


void push(int action) {
    if (top == MAX - 1) {
        printf("Action stack is full\n");
    } else {
        stack[++top] = action;
        printf("Action saved: %d\n", action);
    }
}


void pop() {
    if (top == -1) {
        printf("Nothing to undo\n");
    } else {
        printf("Undo action: %d\n", stack[top--]);
    }
}


void peek() {
    if (top == -1) {
        printf("No recent action\n");
    } else {
        printf("Last action: %d\n", stack[top]);
    }
}


void isEmpty() {
    if (top == -1)
        printf("Undo not possible (stack empty)\n");
    else
        printf("Undo possible\n");
}


void size() {
    printf("Actions available to undo: %d\n", top + 1);
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
