 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* first=headA;
        stack<ListNode*> a;
        stack<ListNode*> b;
        while(first!=NULL){
            a.push(first);
            first=first->next;
        }
        first=headB;
        while(first!=NULL){
            b.push(first);
            first=first->next;
        }
        while(a.top()==b.top()){
            first=a.top();
            a.pop();
            b.pop();
            if(a.empty()==true || b.empty()==true)
                break;
        }
        return first;
    }
