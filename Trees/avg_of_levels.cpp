 vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        while(q.empty()!=true)
        {
            double sum=0;
            double c=0;
            int n=q.size();
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;
                c++;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            double avg=sum/c;
            ans.push_back(avg);
            
        }
        return ans;
    }
