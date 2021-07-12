#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
class MyQueue {
    stack<int> input, output;
public:

    void push(int x) {
        input.push(x);
    }

    int pop(void) {
        int val=peek();

        output.pop();
        return val;
    }

    int peek(void) {
        if (output.empty())
            while (input.size())
                output.push(input.top()), input.pop();
        return output.top();
    }

    bool empty(void) {
        return input.empty() && output.empty();
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
