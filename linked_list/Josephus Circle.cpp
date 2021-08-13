Input: n = 5, k = 2
Output: 3


class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++)
            q.push(i);
        while(q.size()!=1)
        {
            int c=1;
            while(c!=k)
            {
              int x=q.front();
               q.pop();
               q.push(x);
                c++;
            }
            q.pop();
        }
        return q.front();
    }
};
