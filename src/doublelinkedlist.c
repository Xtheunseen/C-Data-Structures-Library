#include <stdlib.h>
#include <stio.h>
#include "doublelinkedlist.h"

struct DoubleNode* createNode(int data, DoubleNode* last)
{
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->last = last;
    return node;
}

