
// Find function for a binary tree that carries ints.
bool find (int n) {
	return find(overallRoot, n);
}

bool find(Node* root, int n) {
	if (root == null) return false;
	if (root->data == n) return true;
	bool a = find(root->left);
	bool b = find(root->right);
	return a || b;
}















struct Node {
	int val;
	Node* left;
	Node* right;

	int noOfNodes (Node* root) {
		if (root == NULL) return 0;
		return 1 + noOfNodes(root->left) + 
		noOfNodes(root->right);
	}

	bool find(Node* root, int n) {
		if (root == NULL) return false;
		if(root->val == n) return true;
		bool l = find (root->left, n);
		if (l == true) return true;
		bool r = find(root->right, n);
		return r;

	}


};








