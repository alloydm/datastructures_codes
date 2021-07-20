//Given the head of a linked list, remove the nth node from the end of the list and return its head.
//Input: head = [1,2,3,4,5], n = 2
//Output: [1,2,3,5]

//Input: head = [1], n = 1
//Output: []

//Input: head = [1,2], n = 1
//Output: [1]

class Solution {
public:
   ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head==NULL)
           return head;
        ListNode*  t=head;
         ListNode* t1=head;
       int c=0;
       while(t!=NULL)
       {
           t=t->next;
           c++;
       }
       if(c==n)     //if only one element present in list 
           return head->next;
       
       t=head;
        for(int i=0;i<n;i++)
            t=t->next;
        while(t->next!=NULL)
        {
            t=t->next;
            t1=t1->next;
        }
        t1->next=t1->next->next;
        return head;
    }
};
