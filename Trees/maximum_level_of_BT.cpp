 int maxLevelSum(TreeNode* root) {
        int maxs=INT_MIN;
        int mlevel=0;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(q.empty()!=true)
        {
            int sum=0;
            level++;
            int count=q.size();
            while(count--)
            {
                TreeNode* temp=q.front();
                q.pop();
                sum=sum+temp->val;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            if(sum>maxs)
            {
                maxs=sum;
                mlevel=level;
            }
        }
        return mlevel;
    }
