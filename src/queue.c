#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* createQueue(int capacity)
{
    Queue* queue = malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = 0;
    queue->back = 0;
    queue->items=malloc(sizeof(int)*capacity);
    return queue;
}

void enqueue(Queue* queue, int item)
{
    if (queue == NULL)
    {
        printf("Queue is null");
        return;
    }
    if (queue->back == queue->capacity)
    {
        printf("Queue overflow");
        return;
    }
    queue->items[queue->back++] = item;
}

int dequeue(Queue* queue)
{
    if (queue == NULL)
    {
        printf("Queue is null");
        return -1;
    }
    if (queue->front == queue->back)
    {
        printf("Queue underflow");
        return -1;
    }
    int item = queue->items[queue->front];
    queue->front++;
    return item;
}

int peek(Queue* queue)
{
    if (queue == NULL)
    {
        printf("Queue is null");
        return -1;
    }
    if (queue->front == queue->back)
    {  
        printf("Queue underflow");
        return -1;
    }
    return queue->items[queue->front];
}

int isEmpty(Queue* queue)
{
    if (queue == NULL)
    {
        printf("Queue is null");
        return -1;
    }
    if (queue->front == queue->back)
        return 1;
    return 0;
}


