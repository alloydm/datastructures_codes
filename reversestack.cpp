#include <iostream>
#include<stack>
using namespace std;
void reversestack(stack<int> s)
{
    int i=0;
    stack<int>s2;
    cout<<"Reverse elements in the stack:"<<endl;
    while(s.size()!=0)
    {
        int data=s.top();
        s.pop();
        s2.push(data);
        cout<<s2.top()<<endl;
    }

}

int main()
{
    stack<int> s1;
    int n;
    cout<<"Enter number of elements inside stack"<<endl;
    cin>>n;
    cout<<"The original elements in the stack:"<<endl;
    for(int i=0;i<n;i++)
       {
           s1.push(i);
           cout<<s1.top()<<endl;
       }


     reversestack(s1);

    return 0;
}
