#include <iostream>

using namespace std;

/* 
 * This is a hash table holding int values.
 * The hash table has an array of Nodes called buckets.  
 * 
 */


struct Node { // Linked list to hold entries at each position.
    int el; // value to be entered in the hash table
    Node* next;
    long hash () { // hash function defined in Node class, but we don't use it in this example
        return el;
    }
};

class HashTable {
private:
    Node** buckets; // An array of Node pointers.
    int size; // size of the table, not the number of entries

    int hash(int el) { // Hash function is a modulo function
        return el % size;
    }

//    int hash(Node& n) {
//        return n.hash() % size;
//    }

public:
    HashTable(int size) {
        this->size = size;
        buckets = new Node*[size]; // create an array of Node pointers
        for (int i = 0; i < size; i++) {
            buckets[i] = NULL; // initialize each Node pointer in array
        }
    }

    void insert(int el) {
        if (find(el)) return;
        Node* n = new Node(); // create a new Node object
        n->el = el; // initialize new Node's variables
        n->next = NULL;

        int ix = hash(el);  // calculate the place where the new value will be placed
        if (buckets[ix] != NULL) { // find the start of the linked list at that place ix
            n->next = buckets[ix];
        }
        buckets[ix] = n;
    }

    bool find(int el) { // find the value el in the list
        int ix = hash(el);  // find the index of the hash table where the element might be
        Node* head = buckets[ix]; // the head of the linked-list at location ix
        while (head != NULL) { // search through the linked-list at that location
            if (head->el == el) { // if found, return true
                return true;
            }
            head = head->next;
        }
        return false;
    }

    void printMe() {
        for (int i = 0; i < this->size; i++) {
            cout << i << " ";
            Node *head = buckets[i];
            while (head != NULL) {
                cout << head->el << " ";
                head = head->next;
            }
            cout << endl;
        }
    }
};

int main(void) {
    HashTable ht(10);
    ht.insert(33);
    ht.insert(10);
    ht.insert(20);
    ht.insert(15);
    ht.insert(25);
    ht.printMe();
    
    cout << ht.find(10) << endl;
    cout << ht.find(50) << endl;
    cout << ht.find(25) << endl;
    cout << ht.find(15) << endl;

    return 0;
}
