#include <stdio.h>
#define Maxsize 5

void insert();
void delete();
void display();

int queue[Maxsize];
int front = -1;
int rear = -1;

int main() {
    insert();
    insert();
    insert();
    insert();
    insert();
    insert(); // This should show overflow
    display();

    delete();
    delete();
    display();

    delete();
    delete();
    delete();
    delete(); // This should show underflow

    return 0;
}

void insert() {
    int data;
    if (rear == Maxsize - 1) {
        printf("\nQueue overflow");
    } else {
        printf("\nEnter a value to insert: ");
        scanf("%d", &data);
        if (front == -1) { // first insertion
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("\nQueue underflow");
    } else {
        printf("\nDeleted element: %d", queue[front]);
        front++;
        if (front > rear) { // Reset if queue is empty
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("\nQueue is empty");
        return;
    }

    printf("\nElements of queue are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}