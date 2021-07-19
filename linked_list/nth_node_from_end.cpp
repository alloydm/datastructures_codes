// Online C++ compiler to run C++ program online
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
void nthnode(Node* one, int n)
{
  Node* firstptr = one;
  Node* temp = one;
  while(n>1)
  {
      temp=temp->next;
      n--;
  }
  while(temp->next!=NULL)
  {
      temp=temp->next;
      firstptr=firstptr->next;
  }
  cout<<firstptr->data;
}
int main() {
    // Write C++ code here
   Node* one = new Node(1);
   Node* two = new Node(2);
    Node* tr = new Node(3);
    Node* four = new Node(4);
    // Node* five = new Node(5);
    one->next=two;
    two->next=tr;
    tr->next=four;
    // four->next=five;
    int n;
    cin>>n;
    nthnode(one,n);
   
    return 0;
}