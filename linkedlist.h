#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct{
    int data;
    struct Node* next;
}Node;

struct Node* createNode(int data);
struct Node* createList(int n);
void traverseList(struct Node* head);

#endif