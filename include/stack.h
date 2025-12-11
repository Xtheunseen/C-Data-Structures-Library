#ifndef STACK_H
#define STACK_H

typedef struct {
    int *items;
    int top;
    int capacity;
} Stack;

Stack* createaStack(int capaicty);
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
void freeStack(Stack* stack);

#endif 
