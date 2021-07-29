TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        { 
            TreeNode *temp=new TreeNode(val);
             return temp;
        }
         if(val<root->val)
            root->left=insertIntoBST(root->left,val);
        else
            root->right=insertIntoBST(root->right,val);
        
        return root;

    }
