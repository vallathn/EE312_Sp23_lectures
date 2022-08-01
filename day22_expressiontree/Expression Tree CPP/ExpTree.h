//
// Created by Vallath Nandakumar on 11/15/17.
//

#ifndef DAY22_EXPRESSIONTREE_EXPTREE_H
#define DAY22_EXPRESSIONTREE_EXPTREE_H
#include <vector>
#include <iostream>
using namespace std;

class Node {
public:
    bool isOperand;
    int operand;
    char optr;
    Node* left;
    Node* right;
    /*
     * If the node carries an operator, what should be the value of
     * operand passed in?
     * A: 0
     * B: NULL
     * C: Any int you like
     * D: Anything at all
     */
    Node(bool isOperand, int operand, char optr) {
        left = nullptr;
        right = nullptr;
        this->isOperand = isOperand;
        this->operand = operand;
        this->optr = optr;
    }
    void print() {
        if (isOperand) {
            cout << operand << endl;
        } else {
            cout << optr << endl;
        }
    }
};
class ExpTree {
private:
    const int spaces_per_level = 4;
    Node* overallRoot;
    Node* add(Node* root, vector<Node*>&);
    void printTree(Node*, int);
    void printSpaces(int);
    int parse(Node*);
    Node* copy(const Node* that);
    void destroy(Node*);
public:
    int parse();
    ExpTree(vector<Node*>& expr); // constructor
    void printTree();
    ExpTree(const ExpTree& that);
    ExpTree& operator=(const ExpTree& that);
    ~ExpTree();
};


#endif //DAY22_EXPRESSIONTREE_EXPTREE_H
