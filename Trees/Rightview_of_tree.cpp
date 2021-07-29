  vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        if(root==NULL)
            return ans;
        q.push(root);
        while(q.empty()!=true)
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                 TreeNode* temp=q.front();
                 q.pop();
                if(i==n)          //to print left view if(i==1) should be used 
                    ans.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
        return ans;
    }
