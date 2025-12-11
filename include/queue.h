#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
    int *items;
    int front;
    int back;
    int capacity;
} Queue;

void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);
int peek(Queue* queue);
int isEmpty(Queue* queue);

#endif
