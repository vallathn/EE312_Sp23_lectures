
//: C14:Inheritance.cpp
// Simple inheritance
#include "Useful.h"
#include <iostream>
using namespace std;

class Y : public X {
	int j; // Different from X's i
public:
	Y() : X::X(2), j(0) { // initializer list optional
		cout << "constructor Y" << endl;
		j = 0;
	}
	~Y() { // not inherited, but can be omitted
		cout << "destructor Y" << endl;
	}
	int change() {
		cout << "calling change in Y" << endl;
		j = permute(); // Different name call
		return j;
	}
	void set(int ii) {
		cout << "calling set in Y" << endl;
		j = ii;
		X::set(ii); // Same-name function call
        //set(ii); // Same-name function call
	}
};

int main() {
	cout << "sizeof(X) = " << sizeof(X) << endl;
	cout << "sizeof(Y) = " << sizeof(Y) << endl;
	Y D;

	cout << D.change() << endl;
	// X function interface comes through:
	cout << D.read() << endl;
	cout << D.permute() << endl;
	// Redefined functions hide base versions:
	D.set(12);
	cout << D.read() << endl;
	return 0;

} ///:~
