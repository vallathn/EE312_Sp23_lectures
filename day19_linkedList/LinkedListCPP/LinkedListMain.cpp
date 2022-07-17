#include <iostream>

using namespace std;
struct Node {
    int val = 0;
    Node* next = NULL;
    Node* recursive_copy(Node* other) {
        if (other == nullptr)
            return nullptr;
        Node* n = new Node();
        n->val = other->val;
        n->next = recursive_copy(other->next);
    }
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

LinkedList::LinkedList() {
    size = 0;
    root = NULL;
    cout << "def const" << endl;
}

LinkedList::LinkedList(const LinkedList& other) {
    copy(other);
    cout << "copy const" << endl;
}

LinkedList& LinkedList::operator=(LinkedList& other) {
    if (this != &other) {
        destroy();
        copy(other);
    }

    cout << "assign" << endl;
    return *this;
}

LinkedList::~LinkedList() {
    cout << "destructor" << endl;
    destroy();
}

void LinkedList::copy(const LinkedList& other) {

    root = NULL;
    if (other.root == NULL)
        return;
    insert(other.root->val);
    Node* my_current = root;
    Node* other_current = other.root;
    while (other_current->next != NULL) {
        my_current->next = new Node();
        my_current->next->val = other_current->next->val;
        my_current = my_current->next;
        other_current = other_current->next;
    }
}

void LinkedList::destroy() {
    Node* prev;
    Node* current = root;
    while (current != NULL) {
        prev = current;
        current = current->next;
        delete prev;
    }
}

void LinkedList::insert(int val) {
    Node* n = new Node();
    n->val = val;
    n->next = root;
    root = n;
    size++;
}

void LinkedList::insert_end(int val) {
    Node* n =   new Node();
    n->val = val;
    if (root == NULL) {
        root = n;
        return;
    }

    Node* nxt = root;
    while (nxt->next != NULL) {
        nxt = nxt->next;
    }
    nxt->next = n;
}

// Removes only the first element with the given value.
void LinkedList::remove(int val) {
    Node* prev = NULL;
    Node* current = root;
    while (current != NULL && current->val != val) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        // Element not in the list.
        return;
    }

    if (prev == NULL) { // first element to be removed
        root = current->next;
    } else {
        prev->next = current->next;
    }

    size--;

    delete current;
}

void LinkedList::print() {
    Node *current = root;
    cout << "{";
    while (current != NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << "}" << endl;
}

bool LinkedList::find(int val) {
    for (Node *current = root; current != NULL; current = current->next) {
        if (current->val == val) {
            return true;
        }
    }
    return false;
}

int main(void) {
    LinkedList l;
    l.insert(3);
    l.insert(5);
    l.insert(77);
    l.remove(3);
    l.print();

    LinkedList l2 = l;
    l2.print();

    LinkedList* l3 = new LinkedList();
    l3->insert(33);
    LinkedList l4 = *l3;
    l4.print(); // should be {33}

    delete l3;

    // check empty lists
    LinkedList l5;
    l5.print(); // should be {}
    LinkedList l6;
    l6 = l5;
    l6.print(); // should be {}
    bool exists = l5.find(4);
    LinkedList l7(l);
    l.print();

    return 0;
}
