int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>s;
        TreeNode* temp=root;
        while(temp!=NULL || s.empty()!=true)   
        {
            while(temp!=NULL)
            {
                s.push(temp);
                temp=temp->left;     //inorder traversal  (LNR)
             }
            temp=s.top();
            k--;
            if(k==0)
                return temp->val;
            s.pop();
            temp=temp->right;
        }
        return 0;
    }
