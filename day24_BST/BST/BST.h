//
// Created by Vallath Nandakumar on 2020-11-14.
//

#ifndef BST_CLASS_SUM20_BST_H
#define BST_CLASS_SUM20_BST_H

#include <iostream>
using namespace std;
// When you have a template class, you may not have separate .h and .cpp files.  The function definitions
// should be in the .h file.

template <class T>
class BST {
    struct Node {
        T data;
        Node* left;
        Node* right;

        Node(T val) {
            data = val;
            left = right = nullptr;
        }
        ~Node() {
            delete left;
            left = nullptr;
            delete right;
            right = nullptr;
        }
    }; // end of class Node

    Node* overallRoot;

    static Node* recursiveCopy(Node* root) {
        if (root == nullptr)
            return root;
        Node* n = new Node(root->data);
        n->left = recursiveCopy(root->left);
        n->right = recursiveCopy(root->right);
        return n;
    }

    void copy(const BST& other) {
        overallRoot = recursiveCopy(other.overallRoot);
    }

    void destroy() {
        delete overallRoot;
        overallRoot = nullptr;
    }

    Node* add(T val, Node* root) {
        if (root == nullptr)
            return new Node(val);
        if (val <= root->data)
            root->left = add(val, root->left);
        else
            root->right = add(val, root->right);
        return root;
    }

    void print(Node* root, int level) {
        if (root == nullptr) return;
        print(root->right, level+1); // print the right sub-tree
        printSpaces(level); // print the indentation for the root of sub-tree
        cout << root->data << endl;
        print(root->left, level+1); // print the left sub-tree
    }

    void printSpaces(int level) { // print 4 spaces per level, for indentation
        for (int i = 0; i < level*4; i++) {
            cout << ' ';
        }
    }

public:
    BST() {
        overallRoot = nullptr;
    }
    BST(const BST& other) {
        cout << "calling copy constructor" << endl;
        copy(other);
    }

    BST& operator=(const BST& rhs) {
        cout << "calling assignment operator" << endl;
        if (this == &rhs)
            return *this;
        destroy();
        copy(rhs);
        return *this;
    }
    ~BST() {
        cout << "calling destructor" << endl;
        destroy();
    }
    void add(T val) {
        overallRoot = add(val, overallRoot);
    }
    void print(){
        print(overallRoot, 0); // call helper method
    }
};
#endif //BST_CLASS_SUM20_BST_H
