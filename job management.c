#include <stdio.h>
#include <string.h>

#define MAX 5

char queue[MAX][10];
int front = -1, rear = -1;


int isEmpty() {
    return front == -1;
}


int size() {
    if (isEmpty())
        return 0;
    return rear - front + 1;
}


void enqueue(char jobID[]) {
    if (rear == MAX - 1) {
        printf("Print queue is full. Cannot add job %s\n", jobID);
        return;
    }
    if (front == -1)
        front = 0;

    rear++;
    strcpy(queue[rear], jobID);
    printf("Job %s added to print queue\n", jobID);
}


void dequeue() {
    if (isEmpty()) {
        printf("No print jobs pending\n");
        return;
    }
    printf("Job printed: %s\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}


void displayFront() {
    if (isEmpty())
        printf("No job is ready to print\n");
    else
        printf("Next job to print: %s\n", queue[front]);
}

int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");

    dequeue();
    displayFront();

    printf("Pending jobs: %d\n", size());

    return 0;
}