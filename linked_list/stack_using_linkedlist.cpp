#include<iostream>

using namespace std;


class list
{
    public:
            int val;
            list* next;

            list()
            {
                val=0;
                next=NULL;
            }
            list(int value)
            {
                val=value;
                next=NULL;
            }

};

class stack
{
    public:
          list* top;
          bool isempty();
          void push(int);
          void pop();
          int top1();
          void display();
};
bool stack::isempty()
{
    
    if(top == NULL)
        return true;
    return false;

}
void stack::push(int data)
{
   
    list* temp=new list;
    temp->val=data;
    temp->next=top;
    top=temp;
}
void stack::pop()
{
    
    cout<<"popped value is "<<(top->val)<<endl;
    top=top->next;
}
int stack::top1()
{
    return top->val;
}
void stack::display()
{
    list* temp = top;
    while(temp->next!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{
    int option,data;
    stack s;
    
   
    do
    {
        cout<<"enter option"<<endl;
         cin>>option;
        switch(option)
        {
            case 1:
                    cout<<"enter data"<<endl;

                    cin>>data;
                    s.push(data);
                    break;
            case 2:
                    if(!s.isempty())
                      s.pop();
                    break;
            case 3:
                   if(!s.isempty())
                      cout<<s.top1()<<endl;
                      break;
            case 4:
                   if(!s.isempty())
                      s.display();
                      break;
                     
                    
        }
    } while (option!=0);
    return 0;
    

}