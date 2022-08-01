#include <iostream>
#include "ExpTree.h"

int main() {

    string a(" + + 2 3 - 4 5"); // expression to be parsed
    int size = 7;
    Node* nodes [size]; // create set of Nodes, one for each token
    nodes[0] = new Node(false, 0, '+');
    nodes[1] = new Node(false, 0, '+');
    nodes[2] = new Node(true, 2, '\0');
    nodes[3] = new Node(true, 3, '\0');
    nodes[4] = new Node(false, 0, '-');
    nodes[5] = new Node(true, 4, '\0');
    nodes[6] = new Node(true, 5, '\0');
    vector<Node*> expr;
    for (int i = 0; i < size; i++) { // add Nodes to expression expr
        expr.push_back(nodes[i]);
        //nodes[i]->print();
    }
    cout << endl;

    ExpTree myTree(expr); // make a tree using the expression expr

    cout << endl;
    myTree.printTree(); // print out the expression tree (sideways)

    cout << endl;
    cout << a << " = " << myTree.parse() << endl; // parse the expression tree

    // single operand expression; create tree and parse
    nodes[0] = new Node(true, 5, 0); // expression is just '5'
    expr.clear();
    expr.push_back(nodes[0]);
    ExpTree myTree2(expr);
    cout << 5 << " = " << myTree2.parse() << endl;

    expr.clear();
    string c(" +  2 - 4 5"); // expression to be parsed
    size = 5;
    nodes[0] = new Node(false, 0, '+');
    nodes[1] = new Node(true, 2, '\0');
    nodes[2] = new Node(false, 0, '-');
    nodes[3] = new Node(true, 4, '\0');
    nodes[4] = new Node(true, 5, '\0');

    for (int i = 0; i < size; i++) { // add Nodes to expression expr
        expr.push_back(nodes[i]);
    }
    ExpTree myTree3(expr);
    cout << "---- myTree3" << endl;
    myTree3.printTree();
    cout << c << " = " << myTree3.parse() << endl;

    ExpTree myTree4(myTree3); // copy constructor
    cout << "---- myTree4" << endl;
    myTree4.printTree();
    cout << " = " << myTree4.parse() << endl;

    myTree4 = myTree; // call assignment operator
    cout << "---- myTree4" << endl;
    myTree4.printTree();
    cout << " = " << myTree4.parse() << endl;

    ExpTree* myTree5p = new ExpTree(myTree);
    delete myTree5p;


    return 0;
}