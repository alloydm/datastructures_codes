int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*>q;
        int sum=0;
        if(root==NULL)
            return 0;
        q.push(root);
        while(q.size()!=0)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->val >=low && temp->val<=high)
                sum+=temp->val;
            if(temp->left!=NULL && temp->val>=low)
                q.push(temp->left);
            if(temp->right!=NULL && temp->val<=high)
                q.push(temp->right);
        }
        return sum;
    }
};
