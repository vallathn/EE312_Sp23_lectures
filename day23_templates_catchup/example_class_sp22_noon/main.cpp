#include <iostream>
using namespace std;
class Customer {
    string name;
    int rattles;

    void foo(Customer c) {
       // hidden
       // make copy_of_c
       // use the string cc to make a copy and set
       // copy_of_c's name to it
       // copy c's rattles over to copy_of_c's rattles
    }

    Customer() {
        name = "Superman";
        rattles = 0;
    }

    Customer (const Customer& other) {
        name = other.name;
        rattles = other.rattles;
    }
};

class MyString {
    int len;
    char* data;
public:
    MyString(char* in) {
        len = 0;
        while(in[len] !=0){
            len+=1;
        }
        data = new char[len+1];
        for (int i = 0; i <= len; i++) {
            data[i] = in[i];
        }
    }

    MyString (const MyString& other) {
        len = other.len;
        data = new char[len + 1];
        for (int i = 0; i <= len; i++) {
            data[i] = other.data[i];
        }
    }

    ~MyString() {
        delete [] data;
    }

    MyString& operator=(const MyString& rhs) {
        if (this != &rhs) {
            delete[] data;
            len = rhs.len;
            data = new char[len + 1];
            for (int i = 0; i <= len; i++) {
                data[i] = rhs.data[i];
            }
        }
        return *this;
    }
    void convertStartToUpperCase() {
        if (len > 0)
            data [0] = data[0] + 'A' - 'a';
    }
    void print() {
        for (int i = 0; i < len; i++)
            cout << data[i] << ", ";
        cout << endl;
    }
};
MyString bar (MyString string1) {
    string1.convertStartToUpperCase();
    return string1;
}
int main() {
    MyString m1("abd");
    MyString m2("abcdef");
    m2 = m1;
    MyString* m3 = new MyString("paul");
    MyString m4 = bar(*m3);
    m3->print();
    m4.print();


    return 0;
}
