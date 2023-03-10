#include <iostream>
#include <vector>
using namespace std;

int* shuffle(vector<int*> & ints)  {
    int* b = ints[1];
    ints[1] = ints[0];
    ints[0] = b;
    return ints[0];
}

int& foo (int& a, int& b) {
    a *= b;
    b++;
    return a;
}

int main() {
    int a [] = { 0, 100};
    vector<int*> intps;
    intps.push_back(a);
    intps.push_back(a + 1);
    cout << *(shuffle(intps)) << endl;
    cout << *intps[0] << endl;
    int x = 1; int y = 3;
    cout << x << " " << y << endl;
    foo(x, y) = 6;
    cout << x << " " << y << endl;
    return 0;
}
