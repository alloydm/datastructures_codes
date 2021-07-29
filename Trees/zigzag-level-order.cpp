vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        stack<TreeNode*>s1;
        s1.push(root);
        int lr=1;
        while(s1.size()!=0)
        {
            stack<TreeNode*>s2;
            vector<int>a;
            while(s1.size()!=0)
            {   
                TreeNode* temp;
                temp=s1.top();
                a.push_back(temp->val);
                s1.pop();
                
                if(lr==1)
                {
                    if(temp->left!=NULL)s2.push(temp->left);
                    if(temp->right!=NULL)s2.push(temp->right);
                }
                else
                {
                    if(temp->right!=NULL)s2.push(temp->right);
                    if(temp->left!=NULL)s2.push(temp->left);
                }
            }
            lr=-lr;
            s1=s2;
            ans.push_back(a);
        }
    return ans;
    }
