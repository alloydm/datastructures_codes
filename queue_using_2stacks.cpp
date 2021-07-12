#include<iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;


class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1,s2;
    MyQueue() {
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty()==1)
            s1.push(x);
        else
        {
            while(s1.size()!=0)
            {
                int data=s1.top();
                s1.pop();
                s2.push(data);
            }
            s1.push(x);
            while(s2.size()!=0)
            {
                int data1=s2.top();
                s2.pop();
                s1.push(data1);
            }

        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x=s1.top();
        s1.pop();
        return x;
    }

    /** Get the front element. */
    int peek() {
        return s1.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.size()==0)
            return true;
        else
            return false;
    }
};

int main()
{
    MyQueue q1;
    int val,m;

    cout<<"Enter 1 to enqueue elements"<<endl;
    cout<<"Enter 2 to dequeue elements"<<endl;
    cout<<"Enter 3 to check peek element"<<endl;
    cout<<"Enter 4 to check if queue is empty "<<endl;

    for(;;)
    {
       cin>> m;
       if(m==1)
       {
           cout<<"Enter the no u want to enqueue:"<<endl;
           cin>>val;
           q1.push(val);
       }
       else if(m==2)
       {
           q1.pop();
           cout<<"Element dequeued "<<endl;
       }
       else if(m==3)
       {

          cout<<"Peek element of queue is:";
          cout<< q1.peek()<<endl;
       }
       else if(m==4)
       {
           if(q1.empty()==0)
            cout<<"Stack not empty"<<endl;
           else
            cout<< "Stack is empty"<<endl;
       }
       else{
        break;

       }
    }

    return 0;
}
