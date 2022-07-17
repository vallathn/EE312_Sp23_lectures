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
    void copy(const Vector& other); // copy other to me, without changing other

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
    Vector();
    Vector(const Vector& other);
    bool operator==(const Vector& other) { // v1 == v3?  v1 == v2?
        if (len != other.len)
            return false;
        for (int i = 0; i < len; i++) {
            if (data[i] != other.data[i])
                return false;
        }
        return true;
    }

    // want to Vector v1; Vector v2; add stuff to v1; v2 = v1; v3 = v2 = v1;
    // when you do v2 = v1, you are calling v2's = operator.
    Vector& operator=(const Vector& rhs) {
        if (!(&rhs == this)) {
            delete[] data;
            copy(rhs);
        }
        return *this;
    }

    bool operator<(const Vector& rhs) {
        return (len < rhs.len);
    }

    Vector operator+(const Vector& rhs) { // returns a new vector that is the sum of me and rhs v3 = v1 + v2
       Vector sum(len + rhs.len) ;
       // copy contents of this and rhs to new vector sum
       return sum;
    }
    // write += function
    // ~ operator that negates every int
    // write a sort function for Vector


};


#endif //VECTOR_SUM21_VECTOR_H
