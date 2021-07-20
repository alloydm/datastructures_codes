//Input: head = [1,2,3,3,4,4,5]
//Output: [1,2,5]


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> v;
        map<int,int> m;
        ListNode* temp=head;
      if(head==NULL)
          return NULL;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            m[temp->val]++;
            temp=temp->next;
        }
        for(auto &i:m)
        {
           if(i.second>1)
           {
               v.erase(remove(v.begin(),v.end(),i.first),v.end());
           }
        }
        if(v.size()==0)
            return NULL;
     ListNode* newnode=new ListNode(v[0]);
    for(int i=1;i<v.size();i++){
           
        ListNode* h=newnode;
        while(h->next != NULL){
            h=h->next;
        }
       ListNode* k=new ListNode(v[i]);
        h->next=k;
    }
    return newnode;
    }
};
