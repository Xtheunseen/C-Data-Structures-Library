#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

struct Node* createNode(int data)
{
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* createList(int n)
{
    Node* head = createNode(-1);
    Node* last = head;
    for (; n > 0; n--)
        last->next = createNode(-1); 
        last = last->next;

    return head;
}

void traverseList(struct Node* head)
{
    if (head == NULL)
    {
        printf("Head is null");
        return;
    }

    Node* node = head;
    while (head->next != NULL)
    {
        printf("%d\n", node->data);
        node = node->next
    }
}

void freeList(Node* head)
{
    Node* current = head;
    while (head->next != NULL)
    {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}