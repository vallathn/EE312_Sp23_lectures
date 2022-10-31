//
// Created by Vallath Nandakumar on 2019-07-26.
//

#ifndef TREETRAVERSAL_BT_H
#define TREETRAVERSAL_BT_H

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node() {
        left = nullptr;
        right = nullptr;
        data = 0;
    }

    ~Node() { // ask students to write this
        delete left;
        delete right;
        // delete(this); // ????
    }

    Node(int data, Node* l, Node* r) {
        this->data = data;
        this->left = l;
        this->right = r;
    }
};

class BT {
public:
    Node* root;

    void print() {
        print(root);
    }

    void print(Node* n) {
        if (n == nullptr)
            return;
        else {
            // print left subtree
            print(n->left);
            // print root
            cout << n->data << " ";
            // print right sub-tree
            print(n->right);
        }
    }
};


#endif //TREETRAVERSAL_BT_H
