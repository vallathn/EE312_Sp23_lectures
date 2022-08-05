#include <iostream>
#include "LinkedList.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    LinkedList<string> l1;
    l1.append("hello");
    l1.append("hi");
    l1.print();
    cout << endl;
    LinkedList<string> l2 = l1;
    l2.print();
    cout << endl;
    LinkedList<string> l3;
    l3.append("joe");
    l3 = l2;
    l3.print();
    cout << endl;

    return 0;
}