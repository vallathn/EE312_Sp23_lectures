#include <iostream>

#include <iostream>

using namespace std;
struct Node {
    int val = 0;
    Node* next = NULL;
};

class LinkedList {
private:
    int size = 0;
    Node* root;

    void destroy();
    void copy(const LinkedList& other);

public:
    LinkedList();
    LinkedList(const LinkedList& other);
    ~LinkedList();
    LinkedList& operator=(LinkedList& other);

    void insert(int val);
    void remove(int val);
    bool find(int val); // for recursive find, use a helper function with a Node* as an additional parameter
    void print();
    void insert_end(int val);
    void copy_recursive(LinkedList& other);
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
