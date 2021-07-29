 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        if(root==p|| root==q)
            return root;
        TreeNode* l=lowestCommonAncestor(root->left,p,q);
        TreeNode* r=lowestCommonAncestor(root->right,p,q);
        
        if(l!=NULL && r!=NULL)
            return root;
        else
            return (l!=NULL)?l:r;
    }
