//
// Created by Vallath Nandakumar on 8/7/18.
//

#ifndef LINKEDLISTRECURSIVE_LINKEDLIST_H
#define LINKEDLISTRECURSIVE_LINKEDLIST_H

#include <iostream>
using namespace std;
template<class T>
class LinkedList {
private:
    struct Node {
        T value;
        Node* next;
        Node* prev;

        // value constructor
        Node(T value) {
            this->value = value;
            next = nullptr;
            prev = nullptr;
        }

        // copy constructor
        Node(const Node& rhs) {
            value = rhs.value;
            if (rhs.next) {
                next = new Node(*rhs.next); //
                next->prev = this;
            } else {
                next = nullptr;
            }
        }

        // destructor
        ~Node(void) {
            delete next;  // calls delete of next, which recursively calls delete on its next
        }
    }; // end of struct Node

    Node* find(Node* n, T value) {
        if (n == nullptr)
            return n;
        if (n->value == value)
            return n;
        return (find(n->next, value));

    }


    Node* head;

public:
    Node* find(T value) {
        return find(head, value);
    }

    LinkedList(const LinkedList& other) {
        head = new Node(*(other.head));
    }

    LinkedList() {
        head = nullptr;
    }

    LinkedList& operator=(const LinkedList& rhs) {
        delete head;
        head = new Node(*(rhs.head));
        return *this;
    }

    ~LinkedList() {
        delete head;
    }

    void print() {
        Node* n = head;
        cout << " {";
        string comma = "";
        while (n != nullptr) {
            cout << comma << n->value;
            comma = ", ";
            n = n->next;
        }
        cout << "} ";
    }

    void append(T value) {
        Node* new_node = new Node(value);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* n = head;
        while (n->next != nullptr)
            n = n->next;
        n->next = new_node;
        new_node->prev = head;
    }

};

#endif //LINKEDLISTRECURSIVE_LINKEDLIST_H
