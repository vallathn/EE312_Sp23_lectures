#include <iostream>
using namespace std;

// Function template.
template <class T>
T getMin(T a, T b) {
    return a < b ? a : b;
}

// Class template.
template <class T>
class Pair {
    T x;
    T y;

 public:
    Pair(T x, T y) {
        this->x = x;
        this->y = y;
    }

    T getX() { return x; }

    T getY() { return y; }
};

int main(void) {
    Pair<int> p(3, 4);
    cout << p.getX() << endl;
    cout << p.getY() << endl;

    // does not make much sense to have string, but we are
    // illustrating.
    Pair<string> pd ("a", "b");
    //Pair<string> pe (1, 2);
    cout << pd.getX() << endl;
    cout << pd.getY() << endl;

    cout << getMin<int>(p.getX(), p.getY()) << endl;
    cout << getMin<string>(pd.getX(), pd.getY()) << endl;
    cout << getMin(p.getX(), p.getY()) << endl; // infer type as int
    cout << getMin<string>(pd.getX(), pd.getY()) << endl;
    // cout << getMin<string>(p.getX(), p.getY()) << endl;
}
