//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
//There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
 // Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode *slow=head,*fast=head;
        
        while(slow!=NULL && fast!=NULL && fast->next!=NULL) {
            
            slow = slow->next;               //Slow moves by 1 step
            fast = fast->next->next;        //Fast moves by two steps
            
            //If they meet then there is a loop
            if(slow==fast) 
            {
                //To find the starting element where the loop starts
                fast = fast;
                slow = head;
                while(slow!=fast) 
                {
                    //Both move by 1 step
                    slow = slow->next;
                    fast=fast->next;
                }
                return slow;
                
            }
 
        }
        
        return NULL; //No loop
        }
};
