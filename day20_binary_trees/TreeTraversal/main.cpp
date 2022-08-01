#include <iostream>
#include "BT.h"

int main() {
    // create 6 nodes first
    // set data and left/right children of each node so that it a BT
    // create a  BT object
    // set BT's root to your tree's root
    // my_bt->print();
    // destroy your tree; write ~BT
    //

    Node* n1 = new Node();
    n1->data = 1;

    Node* n2 = new Node();
    n2->data = 2;
    n1->left = n2;

    Node* n3 = new Node();
    n3->data = 3;
    n1->right = n3;

    BT* myBT = new BT();
    myBT->root = n1;
    myBT->print();
    delete n1;
    delete myBT;

    return 0;
}