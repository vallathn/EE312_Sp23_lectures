#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct node {
    struct node* next;
    int* data;
    int numDataElements;
};

struct node* createLL(int numNodes) {
    struct node* root = NULL;
    struct node* cursor = NULL;

    int i;
    int j;

    if (numNodes == 0)
        return NULL;

    root = (struct node*) malloc(sizeof(struct node));
    root->next = NULL;
    root->data = (int*) malloc(sizeof(int));
    root->data[0] = 0;
    root->numDataElements = 1;

    cursor = root;
    for (i = 2; i <= numNodes; i++) {
        cursor->next = (struct node*)malloc(sizeof(struct node));
        cursor = cursor->next;
        cursor->next = NULL;
        cursor->numDataElements = i;
        cursor->data = (int*) malloc(cursor->numDataElements*sizeof(int));
        for (j = 0; j < i; j++) {
            cursor->data[j] = j;
        }
    }
    return root;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}