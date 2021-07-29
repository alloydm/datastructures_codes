 vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        q.push(root);
       if(root==NULL)
           return ans;
        while(q.empty()!=true)
        {
            vector<int>a;
            int n=q.size();
            while(n--){              
            TreeNode*temp=q.front();
            a.push_back(temp->val);
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            }  
             ans.push_back(a);
        }
     
        return ans;
    }
