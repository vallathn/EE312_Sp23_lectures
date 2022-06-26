/**
 * Recitation 6: Linked List
 * EE 312 Fall 2021
 */
#include "LinkedList.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

/**
 * Creates a linked list with a specified number of nodes
 * and an array of values.
 */
Node *createList(int num_nodes, int *values)
{
    Node *head = (Node*) malloc(sizeof(Node));
    head->data = values[0];
    head->next = NULL;

    Node *cur_node = head;
    for (int i = 1; i < num_nodes; ++i)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = values[i];
        new_node->next = NULL;

        cur_node->next = new_node;

        cur_node = new_node;
    }

    return head;
}

/**
 * Print out all values of a linked list in order.
 */
void printValues(Node *head)
{
    Node *cur_node = head;
    while (cur_node != NULL)
    {
        printf("%d,", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

/**
 * Searches for the first node that contains the data in the linked list
 * and returns whether or not the data exists.
 *
 * @return -1 if not found, or an index n > 0 where n is the 0-indexed
 * position of the node that contains the data
 */
int find(Node *head, int data)
{
    Node *cur_node = head;
    uint32_t index = 0;
    while (cur_node != NULL)
    {
        if (data == cur_node->data)
        {
            return index;
        }

        cur_node = cur_node->next;
        ++index;
    }
    return -1;
}

int length(Node *head)
{
    int i = 0;
    Node *node = head;
    while (node != NULL)
    {
        node = node->next;
        ++i;
    }
    return i;
}

/**
 * Insert a new node with a given value at a given index.
 *
 * @return the new head pointer of the linked list.
 */
Node *insertIntoList(Node *head, int index, int value)
{
    // Demo by your TA

    if (index < 0 || index > length(head)) {
        printf("Index out of range: %d", index);
        exit(1);
    }

    // index == 0
    if (index == 0)
    {
        Node *node_to_insert = (Node*) malloc(sizeof(Node));
        node_to_insert->next = head;
        node_to_insert->data = value;
        return node_to_insert;
    }

    // index >= 1
    Node *prev_node = head;
    for (int i = 0; i < index - 1; ++i)
    {
        prev_node = prev_node->next;
    }
    Node *node_to_insert = (Node*) malloc(sizeof(Node));
    node_to_insert->next = prev_node->next;
    node_to_insert->data = value;
    prev_node->next = node_to_insert;

    return head;
}

/**
 * Remove an existed node at a given index.
 *
 * @return the new head pointer of the linked list.
 */
Node *removeFromList(Node *head, int index)
{
    // TODO: fill out the remainder of this function.

    if (index < 0 || index >= length(head)) {
        printf("Index out of range: %d", index);
        exit(1);
    }

    if (index == 0)
    {
        Node *node = head;
        head = head->next;
        free(node);
        return head;
    }

    Node *prev_node = head;
    for (int i = 0; i < index - 1; ++i)
    {
        prev_node = prev_node->next;
    }
    Node *node_to_remove = prev_node->next;
    prev_node->next = node_to_remove->next;
    free(node_to_remove);
    return head;
}

/**
 * Destroy a linked list on the heap. Frees all of the memory from
 * each node.
 */
void destroyList(Node *head)
{
    // TODO: fill out the remainder of this function.
    Node *node = head;
    while (node != NULL)
    {
        Node *temp = node;
        node = node->next;
        free(temp);
    }
}

void testInsertAtFirst(void)
{
    int values[] = {1,2};
    Node *list = createList(2, values);
    list = insertIntoList(list, 0, 3);
    assert(0 == find(list, 3));
    destroyList(list);
}

void testInsertAtMiddle(void)
{
    int values[] = {1,2,4};
    Node *list = createList(2, values);
    list = insertIntoList(list, 2, 3);
    assert(2 == find(list, 3));
    destroyList(list);
}

void testInsertAtLast(void)
{
    int values[] = {1,2};
    Node *list = createList(2, values);
    list = insertIntoList(list, 2, 3);
    assert(2 == find(list, 3));
    destroyList(list);
}

void testRemoveAtFirst(void)
{
    int values[] = {1,2};
    Node *list = createList(2, values);
    list = removeFromList(list, 0);
    assert(-1 == find(list, 1));
    assert(0 == find(list, 2));
    destroyList(list);
}

void testRemoveAtMiddle(void)
{
    int values[] = {1,2,3};
    Node *list = createList(3, values);
    list = removeFromList(list, 1);
    assert(0 == find(list, 1));
    assert(1 == find(list, 3));
    assert(-1 == find(list, 2));
    destroyList(list);
}

void testRemoveAtLast(void)
{
    int values[] = {1,2};
    Node *list = createList(2, values);
    list = removeFromList(list, 1);
    assert(0 == find(list, 1));
    assert(-1 == find(list, 2));
    destroyList(list);
}

void testCreate(void)
{
    int values[] = {1, 2, 3};
    Node *linked_list = createList(3, values);
    // printValues(linked_list);

    assert(0 == find(linked_list, 1));
    assert(1 == find(linked_list, 2));
    assert(2 == find(linked_list, 3));

    destroyList(linked_list);
}

int main(void)
{
    testCreate();
    testInsertAtFirst();
    testInsertAtMiddle();
    testInsertAtLast();
    testRemoveAtFirst();
    testRemoveAtMiddle();
    testRemoveAtLast();
    puts("All tests pass!");
}
