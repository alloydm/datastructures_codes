#include <iostream>
#include<stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st,minst;
    MinStack() {

    }

    void push(int val) {
        if(st.empty()==1)
        {
            st.push(val);
            minst.push(val);
        }
        else
        {
            st.push(val);
            if(val<minst.top())
                minst.push(val);
            else
                minst.push(minst.top());
        }
    }

    void pop() {
        st.pop();
        minst.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};
int main()
{
    MinStack s1;
    int val,m;
    cout<<"Enter 1 to push element"<<endl;
    cout<<"Enter 2 to pop element"<<endl;
    cout<<"Enter 3 to find top element"<<endl;
    cout<<"Enter 4 to getminimum element"<<endl;
    for(;;)
    {
        cin>>m;
        if(m==1)
        {
            cout<<"Push element into stack:"<<endl;
            cin>>val;
            s1.push(val);
        }
        else if(m==2)
        {
            s1.pop();
        }
        else if(m==3)
        {
            cout<<s1.top()<<" is top element in the stack."<<endl;
        }
        else if(m==4)
        {
            cout<<s1.getMin()<<" is the minimum element "<<endl;
        }
        else
            break;
    }

    return 0;
}
