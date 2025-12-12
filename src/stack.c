#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

Stack* createStack(int capacity)
{
    Stack* stack = malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->items = malloc(sizeof(int) * capacity);
    return stack;
}

void push(Stack* stack, int item)
{
    //Checks is top of stack would be equal to stack capacity
    if (stack->top == stack->capacity - 1)
    {
        printf("Stack Overflow");
        return;
    }
    //Adds item to array where the top of the stack is
    stack->items[++stack->top] = item;
}

int pop(Stack* stack)
{
    if (stack->top == -1)
    {
        printf("Stack underflow");
        return;
    }
    int value = stack->items[stack->top];
    stack->top -= 1;
    return value;
}

int peek(Stack* stack)
{
    if (stack->top == -1)
    {
        printf("Stack is empty");
        return;
    }
    return stack->items[stack->top];
}

int isEmpty(Stack* stack)
{
    if (stack->top == -1)
        return 1;
    return 0;
}

void freeStack(Stack* stack)
{
    if (stack == NULL)
    {
        return;
    }
    
    free(stack->items);
    free(stack);
}