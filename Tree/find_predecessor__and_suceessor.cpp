

 Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node* curr = root;
        Node* successor = nullptr;

        while (curr) {  
        if (curr->data > x->data){
            successor = curr; // Potential successor found, but keep going left to find a smaller one
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }

    return successor;
    }



 Node * inOrderPredecessor(Node *root, Node *x)
    {
        Node* curr = root;
        Node* predecessor = nullptr;

        while (curr) {  
        if (curr->data < x->data){
            predecessor = curr; // Potential successor found, but keep going left to find a smaller one
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }

    return predecessor;
    }