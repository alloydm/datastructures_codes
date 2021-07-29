Node* connect(Node* root) {
        if(root==NULL)
            return NULL ;
        if(root->left!=NULL)
            root->left->next=root->right;         //if root->left is not null connect to its sibiling
        if(root->right!=NULL && root->next!=NULL)
            root->right->next=root->next->left;//if root->right is not null connect to next level left child
        connect(root->left);
        connect(root->right);
        
        return root;
       
    }
