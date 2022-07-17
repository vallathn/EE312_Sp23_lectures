#include <iostream>
using namespace std;

int& foo(int& a) {
    a++;
    return a;
}
int main() {
    int x = 5;
    int y = 8;
    foo(x) = foo(y);
    cout << x << " " << y << endl;
    return 0;
}
