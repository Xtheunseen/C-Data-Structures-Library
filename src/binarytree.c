#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

struct Node* addNode(int data)
{
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
}

void removeNode(struct Node* root, int data)
{
    if root = NULL
    {
        printf("Null node");
        return;
    }

    if (data < root->data)
    {
        root->left = removeNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = removeNode(root->right, data);
    }
    else if (data = root->data)
    {
        if (root->left == NULL && root->right == NULL)
            free(root)
        else if (root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
        }
        else  if(root->right == NULL)
        {
            Node* temp = root->left;
            free(root)
        }
        else
        {
            Node* current = root->right;
            while (current->left != NULL)
                current = current->left;
            root->data = current->data;
            root->right=removeNode(root->right, current->data);
        }
        
    }
}

void search(struct Node* root)
{

}



