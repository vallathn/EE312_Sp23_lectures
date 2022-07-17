/* 
 * Jingjiang Li
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* next;  /* Create a singly linked list*/
    int* data;          /* Array of ints */
    int numDataElems;   /* number of elements in the int array */
};

/**
 * [NAME] createLL
 * [IN] Number of nodes to create
 * [OUT] The root of the Linked List
 * [Summary] Create a singly linked list with specified number of nodes.
 * Each nodes contains a list of integers. Note: a zero length linked list is defined as NULL.
 */
struct node* createLL(int numNodes){
    struct node* root = NULL;
    struct node* cursor = NULL;

    int i;
    int j;

    if (numNodes == 0) return NULL;

    root = (struct node*) malloc(sizeof(struct node));
    root->next = NULL;
    root->data = (int *) malloc(sizeof(int));
    root->data[0] = 1;
    root->numDataElems = 1;

    cursor = root;

    for (i = 1; i < numNodes; i++)
    {
        cursor->next = (struct node*) malloc(sizeof(struct node));

        cursor = cursor->next;

        cursor->next = NULL;
        cursor->numDataElems = i;
        cursor->data = (int *) malloc(cursor->numDataElems*sizeof(int));

        for (j = 0; j < i; j++){
            cursor->data[j] = j;
        } 

    } 

    return root;
};

/**
 * [NAME] getSum
 * [IN] root of the linked list
 * [OUT] sum of all of the node data entries
 * [SUMMARY] compute the sum of all of the data in the linked list.
 */
int getSum(struct node* root){
    int sum = 0;
    int i;

    struct node* cursor = root;

    while (cursor != NULL){
        for (i = 0; i < cursor->numDataElems; i++){
            sum += cursor->data[i];
        } 

        cursor = cursor->next;
    } 

    return sum;
}

/**
 * [NAME] destroy
 * [IN] root of the linked list
 * [SUMMARY] Destroy the linked list starting at the root and moving forward.
 */
void destroy(struct node* root){
    struct node* cursor = root;
    if (cursor->next == NULL) {
        free(root->data);
        root->data= NULL;
        free(root);
        root = NULL;
    }

    struct node* previous = NULL;
    while(cursor->next != NULL){
        previous = cursor;
        cursor = cursor->next;
        free(previous -> data);
        previous->data = NULL;
        free(previous);
        previous = NULL;
    }
    free(cursor->data);
    cursor->data = NULL;
    free(cursor);
    cursor = NULL;
}

int main(void){

    // struct node* root = createLL(1);
    // int sum = getSum(root);
    // printf("The sum is %d\n", sum);
    // destroy(root);

	printf("done");
    return 0;
}
