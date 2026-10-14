# C Data Structures Library

This is a lightweight library featuring header and source files for the following data structures:
- Binary tree
- Double Linked List
- Linked list
- Queue
- Stack

Each of these data structures are implemented as reusable modules.

This was developed while studying C, data structures and libraries, in which the main goal was to gain experience implementing data structures and using libraries.

Project structure:

include/
- binarytree.h
- doublelinkedlist.h
- queue.h
- stack.h
src/
- binarytree.c
- doublelinkedlist.c
- linkedlist.c
- queue.c
- stack.c
README.md
.gitignore 

How to build

Compile all source files:
   gcc -Iinclude src/*.c -c *
Create a static library:
   ar rcs libdatastructures.a *.o
Compile application with all source files
   gcc main.c src/*.c -Iinclude -o program
Compile application using static library
   gcc main.c -L. -ldatastructures -Iinclude -o program

When including a data structure, use #include "datastructure.h", replacing datastructure for the structure you would like to use.

For example, with the binary tree:

#include "binarytree.h"

Node* root = NULL
root = insertNode(root, 10);

This includes the binary tree structure and adds a node to the tree with the value 10.


This library was used to test the following skills and information:
- Dynamic memory allocation
- Pointer manipulation
- Recursive algorithms
- Binary Search trees
- Abstract data types
- Header and source files
- Basic library designs in C

Future improvements would include:
- Memory cleanup
- Makefile support
- Circular lists and queues
- Possible graphs, hash tables and or heaps
- Improved error handling

Overall, this project was created to help strengthen my understanding of low-level programming and core data structure implementations.



