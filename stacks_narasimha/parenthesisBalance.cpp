#include <iostream>
#include<stack>
#include<string>
using namespace std;

    bool isValid(string s) {
        stack<char> s1;
        if(s.size()%2!=0)
            return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                s1.push(s[i]);
            else
            {
                if(s1.size()!=0 && s1.top()=='(' && s[i]==')' && s1.size()!=0)
                    s1.pop();
             else if(s1.size()!=0  &&  s1.top()=='{' && s[i]=='}')
                    s1.pop();
               else if(s1.size()!=0 &&  s1.top()=='[' && s[i]==']')
                    s1.pop();
                else
                    return false;

            }
        }
        if(s1.size()==0)
            return true;
        else
            return false;

    }


int main()
{
   string a;
   a="({}][)";
   if(isValid(a)==1)
    cout<<"Balanced"<<endl;
   else
    cout<<"Not balanced"<<endl;

    return 0;
}
