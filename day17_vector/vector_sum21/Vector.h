//
// Created by Vallath Nandakumar on 7/19/21.
//

#ifndef VECTOR_SUM21_VECTOR_H
#define VECTOR_SUM21_VECTOR_H
#include <stdint.h>
#include <iostream>
using namespace std;

struct Vector {
private:
    int32_t* data;
    uint32_t len;
    uint32_t cap;

public:
    uint32_t size(void) const {
        return len;
    }
    Vector(uint32_t init_size_of_vector);
    ~Vector() {
        cout << "Destructor called." << endl;
        delete [] data;
    }
    void push_back(int x);
    void print () const;
    Vector() {}
};


#endif //VECTOR_SUM21_VECTOR_H
