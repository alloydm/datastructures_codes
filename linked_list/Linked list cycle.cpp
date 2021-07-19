//Return true if there is a cycle in the linked list. Otherwise, return false.


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        ListNode *t=head;
        if(head==0)
            return false;
        while(t->next && t->next->next)
        {
            temp=temp->next;
            t=t->next->next;
            if(temp==t)
                return true;
        }
        return false;
        
    }
};
