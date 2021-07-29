 // this is same as height but one line extra
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        diam(root,d);
        return d;
    }
    int diam(TreeNode* root,int& d)
    {
        if(root==NULL)
            return 0;
        int l_dia = diam(root->left,d);
        int r_dia=diam(root->right,d);
        d=max(d,l_dia+r_dia); // extra line
        return max(l_dia,r_dia)+1;
    }