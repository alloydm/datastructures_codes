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

class queue
{
    public:
          list* front=NULL;
          list* rear=NULL;
          bool isempty();
          void enqueue(int);
          void dequeue();
          void display();
};
bool queue::isempty()
{
    
    if(rear == NULL && front == NULL)
        return true;
    else
        return false;
    return false;

}
void queue::enqueue(int data)
{
    
   
    list* temp=new list(data);
    
    if(isempty())
    {
        rear=front=temp;
        cout<<rear->val<<temp->val<<endl;

    }
    else
    {
        rear->next=temp;
        rear=temp;
    }

}
void queue::dequeue()
{
    if(front == rear)
    {
         cout<<"deque value is "<<(front->val)<<endl;
          front=NULL;
          rear=NULL;
    }
    else
    {
        cout<<"deque value is "<<(front->val)<<endl;
        front=front->next;
    }
   
}

void queue::display()
{
    list* temp = front;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
}



int main()
{
    int option,data;
    queue s;
    
   
    do
    {
        cout<<"enter option"<<endl;
         cin>>option;
        switch(option)
        {
            case 1:
                    cout<<"enter data"<<endl;

                    cin>>data;
                    s.enqueue(data);
                  
                    break;
            case 2:
                    if(!s.isempty())
                      s.dequeue();
                    break;
            case 3:
                   if(!s.isempty())
                      s.display();
                      break;
                     
                    
        }
    } while (option!=0);
    return 0;
    

}