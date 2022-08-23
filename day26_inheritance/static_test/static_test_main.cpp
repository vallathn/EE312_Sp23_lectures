#include <iostream>
using namespace std;

struct Foo {
    int i;
    static const int j = 5; // Initialize j
    static int foot ()  {
        return j;
    }
    int bar () {
        return i + j;
    }

    int foobar () {
        static int x = 0;
        x = x + 1;
        return x; // return x
    }
};

int main() {

    Foo foo1;
    foo1.i = 5;
    Foo foo2;
    foo1.i = 3;
    Foo::foot();
    cout << foo1.foobar() << endl;
    cout << foo1.foobar() << endl;

    return 0;
}