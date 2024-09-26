#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    char queue[MAX];
    int front;
    int rear;
} CircularQueue;

void initializeQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(CircularQueue *q) {
    if ((q->front == 0 && q->rear == MAX - 1) || (q->front == q->rear + 1)) {
        return 1;
    }
    return 0;
}

int isEmpty(CircularQueue *q) {
    if (q->front == -1) {
        return 1;
    }
    return 0;
}

void insertElement(CircularQueue *q, char element) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot insert '%c'.\n", element);
        return;
    }
    
    if (q->front == -1) { // First element insertion
        q->front = 0;
    }
    
    q->rear = (q->rear + 1) % MAX;
    q->queue[q->rear] = element;
    printf("Inserted '%c' into the queue.\n", element);
}

void deleteElement(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! No elements to delete.\n");
        return;
    }
    
    char element = q->queue[q->front];
    if (q->front == q->rear) { // Single element condition
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    printf("Deleted '%c' from the queue.\n", element);
}

void displayQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%c ", q->queue[i]);
        if (i == q->rear) {
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    initializeQueue(&q);
    
    int choice;
    char element;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an Element into Circular Queue\n");
        printf("2. Delete an Element from Circular Queue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the character to insert: ");
                scanf(" %c", &element);
                insertElement(&q, element);
                break;
            case 2:
                deleteElement(&q);
                break;
            case 3:
                displayQueue(&q);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}