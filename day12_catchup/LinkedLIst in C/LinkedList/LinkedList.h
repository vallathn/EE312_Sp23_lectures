/**
 * Recitation 6: Linked List
 * EE 312 Spring 2018
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>

/**
 * Simple Linked List data structure.
 */
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct LinkedList {

    Node* head;
    Node* tail;
    int size;
} LinkedList;
/**
 * Creates a linked list with a specified number of nodes
 * and an array of values.
 */
Node *createList(int num_nodes, int *values);

/**
 * Print out all values of a linked list in order.
 */
void printValues(Node *head);

/**
 * Searches for the first node that contains the data in the linked list
 * and returns whether or not the data exists.
 * 
 * @return -1 if not found, or an index n > 0 where n is the 0-indexed
 * position of the node that contains the data
 */
int find(Node *head, int data);

/**
 * Destroy a linked list on the heap. Frees all of the memory from
 * each node. Your job is to fill out this function.
 */
void destroyList(Node *head);

// Other functions to write
int length(Node *head);
Node *insertIntoList(Node *head, int index, int value); // the return value is the new head pointer of the linked list.
Node *removeFromList(Node *head, int index); // the return value is the new head pointer of the linked list.
Node *copyList (Node *head);

#endif
