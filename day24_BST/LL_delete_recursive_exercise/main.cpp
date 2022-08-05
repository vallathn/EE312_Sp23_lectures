#include <iostream>

class Node {
    int data;
    Node* next;

public:
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
    // write a recursive method to delete
    // remove the solution before showing to students
    ~Node () {
        if (next == nullptr)
            return;
        delete next;
    }
};

int main() {
    Node* n3 = new Node(3, nullptr);
    Node* n2 = new Node(2, n3);
    Node* n1 = new Node(1, n2);
    delete n1;
    return 0;
}
