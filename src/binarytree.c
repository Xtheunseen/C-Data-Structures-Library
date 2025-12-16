#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

struct Node* addNode(int data)
{
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* removeNode(struct Node* root, int data)
{
    if (root == NULL)
    {
        printf("Null node");
        return NULL;
    }

    if (data < root->data)
    {
        root->left = removeNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = removeNode(root->right, data);
    }
    else if (data == root->data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else  if(root->right == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
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
    return root;
}

struct Node* insertNode(struct Node* root, int data)
{
    if (root == NULL)
    {
        return addNode(data);
    }

    if (data <= root->data && root->left == NULL)
        root->left = addNode(data);
    else if (data > root->data && root->right == NULL)
        root->right = addNode(data);
    else if (data <= root->data && root->left != NULL)
        insertNode(root->left, data);
    else if (data > root->data && root->right != NULL)
        insertNode(root->right, data);

    return root;

}

struct Node* search(struct Node* root, int data)
{
    if (root == NULL)
    {
        printf("%d could not be found\n");
        return NULL;
    }
    if (data == root->data)
        return root;
    else if (data < root->data)
        return search(root->left, data);
    else if (data > root->data)
        return search(root->right, data);
}



