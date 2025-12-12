#ifndef BINARYTREE
#define BINARYTREE

typedef struct{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

struct Node* addNode(int data);
void removeNode(struct Node* root, int data);
void search(struct Node* root);


#endif