#include <iostream>
using namespace std;
class A {
public:
    int *data;
    int size;

    A() {
        cout << "A()" << endl;
        size = 2;
        data = new int [size];
        data[0] = 101;
        data[1] = 102;
    }
    A (const A& other) {
        cout << "Cop Con" << endl;
        size = other.size;
        data = new int[size];
        data[0] = other.data[0];
        data[1] = other.data[1];
    }
    ~A() {
        cout << "dest" << endl;
        delete [] data;
    }
    A& operator=(const A& other) {
        cout << "= oper" << endl;
       if (this == &other)
           return *this;
       size = other.size;
       delete [] data;
       data = new int[size];
       data[0] = other.data[0];
       data[1] = other.data[1];
       return *this;
    }

    // A c = a + b;
    A operator+(const A& rhs) {
        cout << " + " << endl;
        A sum;
        *(sum.data) = *(data) + *(rhs.data);
        sum.data[0] = data[0] + rhs.data[0];
        sum.data[1] = data[1] + rhs.data[1];
        return sum;
    }

};

int main() {
    A a;
    A b;
    b = a;
    A c = b;
    A d(b);
    A& ra = a;
    A e = a + b;
    cout << "_______" << endl;
    A* f = new A(a + b);
    delete f;


    return 0;
}
