int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()!=true)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            {
                if((temp->left->left==NULL) && (temp->left->right==NULL))
                    sum+=temp->left->val;
            }
                
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            
        }
        return sum;
    }
