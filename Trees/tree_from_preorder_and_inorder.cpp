 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l=preorder.size()-1;
        return tree(0,l,preorder,inorder);
    }
    TreeNode* tree(int left,int right,vector<int>& pre,vector<int>& in)
    {
        static int preindex=0;
        if( left >right )
            return NULL;
        TreeNode* a = new TreeNode(pre[preindex]);
        preindex++;
        if(left == right)
            return a;
        vector<int>::iterator it=find(in.begin(),in.end(),pre[preindex]);
        int b = it-in.begin();
    
        a->left=tree(left,b-1,pre,in);
        a->right=tree(b+1,right,pre,in);
        return a;
        
    }