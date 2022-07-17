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
    delete v2;
    return 0;
}
