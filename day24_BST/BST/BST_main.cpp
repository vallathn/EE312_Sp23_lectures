#include <iostream>
#include "BST.h"
#include <cstring>
using namespace std;

void printDivider() {
    cout << "----------------------------------------" << endl;
}

int main() {
    BST<int> bst1;
    BST<char> bstc;
    bst1.add(1);
    bst1.add(2);
    bst1.add(-2);
    bst1.add(3);
    bst1.print();
    printDivider();
    BST<int> bst3 = bst1;
    bst3.print();
    printDivider();
    bst1.add(-3);
    bst1.print();
    printDivider();

    bst3 = bst1;
    bst3.print();
    printDivider();

    string s("hi");

    BST<string>  bst2;
    bst2.add("mn");
    bst2.add("ab");
    bst2.add("op");
    bst2.print();
    return 0;
}