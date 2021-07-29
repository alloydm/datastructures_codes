 int FindMax(TreeNode* root)
    {
       while(root->right!=NULL)
           root=root->right;      //to find max element 
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        else if(key<root->val)
            root->left=deleteNode(root->left,key);
        else if(key>root->val)
            root->right=deleteNode(root->right,key);
        else                    ///if key is equal to element (root->val)
        {
            if(root->left==NULL)
                return root->right;           //if only one child
            else  if(root->right==NULL)
                return root->left;
            else
            {
                root->val=FindMax(root->left);     //if two children
                root->left=deleteNode(root->left,root->val);
            }
        }
        return root;
    }
