#ifndef DOUBLELINKEDLIST
#define DOUBLELINKEDLIST

typedef struct{
    int data;
    struct DoubleNode* last;
    struct DoubleNode* next;
}DoubleNode;

struct DoubleNode createNode(int data);
struct DoubleNode createList(int n);
void traverseList(struct DoubleNode* head);

#endif
