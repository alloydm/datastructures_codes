
//Input: head = [1,1,2,3,3]
//Output: [1,2,3]
 
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
        if(head==NULL)
            return NULL;
         ListNode* temp=head;
         ListNode*temp1=head;
         ListNode*temp2=head->next;
        while(temp1->next!=NULL)
        {
            if(temp1->val==temp2->val)
            {
            temp2=temp2->next;
                temp1->next=temp2;
        }
        else
        {
            temp1=temp1->next;;
            temp2=temp2->next;
        }
        }
        return temp;
        
    }
};
