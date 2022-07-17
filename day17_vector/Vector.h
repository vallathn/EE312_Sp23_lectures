#pragma once
#ifndef _VECTOR_H
#define _VECTOR_H

#include <stdint.h>
#include <iostream>
using namespace std;

struct Vector {
private:
	int32_t* data;
	uint32_t len;
	uint32_t cap;
	void check_range(uint32_t k);
	void copy(Vector& orig);
	void destroy(void);

public:
	uint32_t size(void) {
		return this->len;
	}

	Vector(uint32_t init_size_of_vector);

	Vector(void) {
		len = 0;
		cap = 8;
		data = new int[cap];
		cout << "void constructor" << endl;
	}

	Vector(Vector& orig) {
		copy(orig);
		cout << "copy constructor" << endl;
	}

	void push_back(int32_t val);
	void pop_back(void) { 
		len = len - 1; 
	}

};

#endif
