#include <iostream>
#include "LinkedList.h"
int main() {
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

    LinkedList<int> li1;
    li1.append(3);
    li1.append(45);
    li1.print();

    cout << li1.find(3)->value << endl;

    return 0;
}