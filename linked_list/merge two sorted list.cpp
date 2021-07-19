
//example1:Input: l1 = [1,2,4], l2 = [1,3,4]
      //  Output: [1,1,2,3,4,4] 
//example2:Input: l1 = [], l2 = []
          //Output: []
//example3:Input: l1 = [], l2 = [0]
        //  Output: [0]

//leetcode

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* merged=NULL;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val<=l2->val)
        {
            merged=l1;
            l1=l1->next;
        }
        else
        {
            merged=l2;
            l2=l2->next;
        }
        merged->next= mergeTwoLists(l1,l2);
        return merged;
    }
};
