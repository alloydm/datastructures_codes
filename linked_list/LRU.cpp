class Node{
    public:
     int key,data;
    Node* next;
    Node* prev;
};
class LRUCache {
    Node* head=new Node();
    Node* tail=new Node();
    int cache_cap,count=0;
    unordered_map<int, Node*> m;
public:
    LRUCache(int capacity) {
       cache_cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        int res=-1;
        Node* node1=m[key];
        if(node1!=NULL)          //if key is found
        {
            res=node1->data;
            Remove(node1);          //remove from its position
            add(node1);            //add at front(head)
        }
        return res;
    }
    
    void put(int key, int value) {
        Node* node=m[key];
        if(node!=NULL)            //if key is found
        { 
            Remove(node);                    //remove from its position 
            node->data=value;                     //add at front
            add(node);
        }
        else
        {
            if(count==(cache_cap))  //if key not present and cache is full
            { 
                Node* prev1=tail->prev;   //tail->prev means last element
                m.erase(prev1->key);      //erase from map
                Remove(prev1);      //remove least used key i.e last one in list from cache
                count--;
            }
         Node* new_node=new Node();    //if key not found and cache is not full 
            new_node->key=key;    
            new_node->data=value;
            m[key]=new_node;    //add to map
            add(new_node);    //add to  head 
            count++;
        }
    }
    
    void add(Node* node)
    {
        Node* temp=head->next;
        node->next=temp;
        temp->prev=node;
        head->next=node;
        node->prev=head;
    }
    
    void Remove(Node* node)
    {
        Node* next_n=node->next;
        Node* prev_n=node->prev;   
        prev_n->next=next_n;
        next_n->prev=prev_n;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
