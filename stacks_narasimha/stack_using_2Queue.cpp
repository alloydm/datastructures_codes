#include <iostream>
#include<stack>
#include<queue>
using namespace std;
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1,q2;
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
            q1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int data;
        if(q1.size()==1)
        {
         data=q1.front();
            q1.pop();
        }
        else
        {
            while(q1.size()!=1)
            {
               q2.push(q1.front());
               q1.pop();
            }
            data= q1.front();
            q1.pop();
            while(q2.size()!=0)
            {
                q1.push(q2.front());
                q2.pop();
            }

        }
          return data;
    }

    /** Get the top element. */
    int top() {
        return q1.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.size()==0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyStack s1;
    int val,m;
     cout<<"Enter 1 to push the element"<<endl;
     cout<<"Enter 2 to pop "<<endl;
     cout<<"Enter 3 to find top element"<<endl;
      cout<<"Enter 4 to check if stack is empty"<<endl;
      for( ; ; )
      {   cin>>m;
          if(m==1)
          {
              cout<<"Enter the no u want to push:"<<endl;
              cin>>val;
              s1.push(val);
          }
          else if (m==2)
          {
              s1.pop();
              cout<<"Element is popped out of stack"<<endl;
          }
          else if(m==3)
          {
              cout<<s1.top()<<" is the top element "<<endl;
          }
          else if(m==4)
          {
              if(s1.empty()==1)
                cout<<"Stack is empty"<<endl;
              else
                cout<<"Stack is not empty"<<endl;
          }
          else
            break;
      }

    return 0;
}
