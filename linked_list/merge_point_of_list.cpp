#include <iostream>
using namespace std;
class Node
{
    public:
           int data;
           Node* next;
           Node()
           {
               data=0;
               next=NULL;
           }
           Node(int val)
           {
               data=val;
               next = NULL;
           }
};
void mergepoint(Node* head1,Node* head2)
{
  
    int len1=0,len2=0,diff;
    Node* temp1=head1;
    Node* temp2 = head2;
    while(temp1!=NULL)
    {
       
        len1++;
        temp1=temp1->next;
    }
     while(temp2!=NULL)
    {
        len2++;
        temp2=temp2->next;
    }
     
    if(len1>len2)
    {
        diff=len1-len2;

    }
    else
    {
        diff = len2-len1;
        temp1=head1;
        head1=head2;
        head2=temp1;
    }
   
    while(diff>0)
    {
        head1=head1->next;
        diff--;
    }
    while(head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }
    cout<<head1->data<<" "<<head2->data;

}
int main() {
    // Write C++ code here
    Node* head2 = new Node(2);
    Node* head22 = new Node(5);
   Node* head1 = new Node(1);
   Node* two = new Node(2);
    Node* tr = new Node(3);
     Node* fr = new Node(4);
   Node* five = new Node(5);
    head1->next=two;
    two->next=tr;
    head2->next=head22;
    head22->next = fr;
    tr->next=fr;
    fr->next=five;
   
    mergepoint(head1,head2);
   
    return 0;
}