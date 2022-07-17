//
// Created by Vallath Nandakumar on 7/19/21.
//

#include "Vector.h"
constexpr bool DEBUG = true;
Vector::Vector(uint32_t init_size_of_vector) {
    this->len = 0;
    cap = init_size_of_vector;
    data = new int32_t [init_size_of_vector];
}

void Vector::push_back(int32_t x) {
    if (len == cap) { // double data
        if (DEBUG) cout << "Doubling vector capactity." << endl;
        cap *= 2;
        int32_t *new_data = new int[cap];
        int i = 0;
        for (i = 0; i < len; i++) {
            new_data[i] = data[i];
        }
        new_data[i] = x;
        delete [] data;
        data = new_data;
    }
    data[len] = x;
    len++;
}

void Vector::print() const {
    cout << "[";
    for (int i= 0; i < len; i++) {
        cout << data[i] << ", ";
    }
    cout << "]" << endl;
}
