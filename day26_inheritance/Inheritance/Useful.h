#pragma once
#ifndef USEFUL_H
#define USEFUL_H
#include <iostream>
using namespace std;

class X {
	int i;
public:
	X() {
		cout << "constructor X" << endl;
		i = 3;
	}

    X (int x) {
        i = x;
    }
	~X() {
		cout << "destructor X" << endl;
	}
	void set(int ii) {
		cout << "set in  X" << endl;
		i = ii;
	}
	int read() const {
		cout << "read in X" << endl;
		return i;
	}
	int permute() {
		cout << "permute in X" << endl;
		return i = i + 47;
	}
};
#endif // USEFUL_H ///:~
