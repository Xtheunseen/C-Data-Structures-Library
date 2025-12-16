#ifndef BINARYTREE
#define BINARYTREE

typedef struct{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

struct Node* addNode(int data);
struct Node* insertNode(struct Node* root, int data);
struct Node* removeNode(struct Node* root, int data);
struct Node*(struct Node* root, int data);


#endif