#include <iostream>
#include "Vector.h"

int main() {
    Vector v1(3);
    v1.push_back(-2);
    v1.push_back(2);
    v1.push_back(3);
    v1.print();
    v1.push_back(5);
    v1.print();
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);

    Vector* v2 = new Vector(5);
    v2->push_back(1000);

    cout << "v1: ";
    v1.print();
    cout << endl;
    Vector v3(v1);
    v3.print();
    cout << endl;
    v3 = *v2;
    v3.print();
    cout << endl;
    delete v2;
    return 0;
}
