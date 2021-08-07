#include <iostream>
#include<list>
#include<unordered_map>
using namespace std;
class LRU
{
    list<int>dq;
    unordered_map<int,list<int>::iterator>ma;
    int size;
    public:
           void capacity(int val)
           {
               size=val;
           }
           void refer(int);
           void display();
};
void LRU::refer(int key)
{
    if(ma.find(key) == ma.end())
    {
        if(dq.size() ==size)
        {
            int val = dq.back();
            ma.erase(val);
            dq.pop_back();
        }
        
    }
    else
       dq.erase(ma[key]);
    dq.push_front(key);
    ma[key] = dq.begin();
       
}
void LRU::display()
{
    for(auto it = dq.begin();it!=dq.end();it++)
       cout<<*it<<" ";
    cout<<endl;

}
int main()
{
    
    
      LRU ca;
    ca.capacity(4);
    ca.refer(1);
    ca.refer(2);
    ca.refer(3);
    ca.refer(1);
    ca.refer(4);
    ca.refer(5);
    ca.display();
 
    return 0;
}
