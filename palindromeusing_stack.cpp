#include <iostream>
#include<stack>
using namespace std;
bool isPalindrome(string s)
{
    int i=0;
    stack<char> s1;
    while(s[i]!='X')
    {
        s1.push(s[i]);
        i++;
    }
    i++;
    while(s[i]!='\0')
    {
        if(s[i]!=s1.top())
            return false;
        else
        {
            s1.pop();
            i++;
        }
    }
    return true;
}

int main()
{
    string exp;
    cout<<"Enter the string: "<<endl;
    getline(cin,exp);
    if(isPalindrome(exp)==1)
        cout<<"The given string is Palindrome"<<endl;
    else
        cout<<"The given string is not Palindrome"<<endl;
    return 0;
}
