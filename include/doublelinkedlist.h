#ifndef DOUBLELINKEDLIST
#define DOUBLELINKEDLIST

typedef struct{
    int data;
    struct DoubleNode* last;
    struct DoubleNode* next;
}DoubleNode;

struct DoubleNode createNode(int data, DoubleNode* last);
struct DoubleNode createList(int n);
void traverseForwards(struct DoubleNode* head);
void traverseBackwards(struct DoubleNode* head);

#endif
