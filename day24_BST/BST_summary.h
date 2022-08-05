struct BST {
private:
	struct Node {
		string value;
		Node* left;
		Node* right;
		Node* parent;

		// value constructor
		Node(string value) { }

		// copy constructor, = not being implemented

		// destructor
		~Node(void) { }
	}; // end of struct Node

private: // BST functions

	static Node* recursiveCopy(Node* root) { } // not necessary for this to be static, but it doesn't use instance variables
	static Node* find(Node* root, string value) { } // not implemented
	void remove(Node* p) { } // not being implemented

	Node* overallRoot; // only instance variable

public:

	/* default constructor */
	BST(void) { }

	/* destructor */
	~BST(void) { }

	/* copy constructor */
	BST(const BST& that) { }

	/* assignment operator */
	BST& operator=(const BST& that) { }

	void insert(string value) { }

	void remove(string value) { } // not implemented

	/* print the tree in sorted order (in-order); left, root, right 
	 */
	void print(const char* spec) { }
};
