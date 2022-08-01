#include <iostream>
using namespace std;

class A {
public:
    int* data;
    int size;

public:
    A() {
        cout << "A()" << endl;
        size = 2;
        data = new int [size];
        data[0] = 101;
        data[1] = 102;
    }

    A(const A& other) {
        data = new int [size];
        data[0] = other.data[0];
        data[1] = other.data[1];
    }

    A& operator=(const A& other) {
        if (this != &other ) {
            delete [] data;
            data = new int [size];
            data[0] = other.data[0];
            data[1] = other.data[1];
        }
        return *this;
    }

    A operator+(const A& rhs) {
        A sum;
        *(sum.data) = *(data) + *(rhs.data);
        sum.data[0] = data[0] + rhs.data[0];
        sum.data[1] = data[1] + rhs.data[1];
        return sum;
    }

    ~A() {
        cout << "~A()" << endl;
        delete [] data;
    }
};

void func(A a) {
}

A& func2(A& a) {
    A b = a;
    return b; // OK or not?
}

int main() {
    A a;
    A b;
    b = a;
    A* pa = new A();
    A& ra = a;
    delete pa;

    cout << "a.data = " << *(a.data) << endl;
    ra = b; // OK or not?
    *(b.data) = 3;
    cout << "b.data = " << *(b.data) << endl;
    cout << "ra.data = " << *(ra.data) << endl;



    // *pa = b; // OK or not?

    //func(a);

    A d = a + b;
    cout << *(d.data) << endl;

    A* e = new A(a + b);

    return 0;
}
