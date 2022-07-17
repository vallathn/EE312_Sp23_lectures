#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include <iostream>

constexpr uint32_t minimum_size = 8;
#define MIN_SIZE (8)

void Vector::copy(Vector& orig) {
	this->len = orig.len;
	this->cap = orig.cap;
	if (this->len < minimum_size) {
		this->cap = minimum_size;
	}
	delete[] data;
	this->data = new int[this->cap];
	for (uint32_t k = 0; k < len; k += 1) {
		this->data[k] = orig.data[k];
	}
}
void Vector::push_back(int32_t val) {
	if (this->len == this->cap) {
		// double vector array size
	}

	(*this).data[this->len] = val;
	(this->len)++;
}
