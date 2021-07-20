/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>m;             // this map points to the clone of the original node
        Node* temp=head;
        while(temp!=NULL)    // 1st Pass - Creation of Nodes
        {
          m[temp]=new Node(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL)   // 2nd pass - Filling the next and random pointers
        {
            m[temp]->next=m[temp->next];
            m[temp]->random=m[temp->random];
            temp=temp->next;
        }
        return m[head];
    }
};
