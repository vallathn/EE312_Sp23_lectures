
void destroy (Node* head) {
	if (head == null) 
		return;
	destroy(head->next);
	delete head;
}

Node* copy(Node* head) {
	if (head == NULL)
		return 0;
	Node* root = new Node();
	root->val = head->val;
	root->next = copy(head->next);
	return root;
}
