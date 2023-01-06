#include <iostream>
using namespace std;
int func1 (int a, int b) {
    a++;
    int c = a + b;
    cout << c << endl;
    return c;
}
int func2 (int &a, int &b) {
    b = a;
    a++;
    int c = a + 3*b;
    cout << c << endl;
    return c;
}
int& func3 (int &a, int &b) {
    b = a;
    a++;
    cout << a << endl;
    return a;
}
int main() {
    int x = 1; int y = 2;
    int z = func1(x, y);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    x = 1; y = 2;
    z = func2(x, y);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    x = 1; y = 2;
    z = func3(x, y); // hint: eval right side first
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    x = 3; y = 1;
    func3(x, y) = func3(x, y); // hint: eval right side first
    cout << x << endl;
    cout << y << endl;

    return 0;
}
