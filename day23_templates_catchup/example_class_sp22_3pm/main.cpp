#include <iostream>
using namespace std;
class Customer {
    string name;
    int rattles;
public:
    Customer()  {
        name = "";
        rattles = 0;
    }
    // Customer a();
    // Customer b();
    // a = b;
    // Customer c(a);
    void foo(Customer c1) {}
    Customer (const Customer& other) {
        name = other.name;
        rattles = other.rattles;
    }
};

class MyString {
    int len;
    char* data;
public:
    MyString (char* in) {
        len = 0;
        int i = 0;
        while(in[len] != '\0'){
            len++;
        }
        data = new char[len + 1];
        for(int i = 0; i < len + 1; i++){
            data[i] = in[i];
        }
    }
    MyString (const MyString& other) {
        len = other.len;
        data = new char[len + 1];
        for(int i = 0; i < len + 1; i++){
            data[i] = other.data[i];
        }
    }

    MyString& operator=(const MyString& rhs){

        if(this != &rhs) {
            len = rhs.len;
            delete[] data;
            data = new char[len + 1];
            for (int i = 0; i < len + 1; i++) {
                data[i] = rhs.data[i];
            }
        }
        return *this;
    }

    ~MyString () {
        delete [] data;
    }
    void print()    {
        for (int i = 0; i < len; i++) {
            cout << data[i] << ", ";
        }
        cout << endl;
    }
    MyString capitalizeFirstLetter(MyString s) {
        if (len > 0)
            s.data[0] = s.data[0] - ('a' - 'A');
        return s;
    }
};


int main() {
    MyString a ("abc");
    MyString b (a);
    MyString* c = new MyString("jesus");
    a.print();
    b.print();
    c->print();
    MyString d = c->capitalizeFirstLetter(*c);
    d.print();
    c->print();


    return 0;
}
