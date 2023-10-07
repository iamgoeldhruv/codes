#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int v)
    {
        data=v;
        next=NULL; 

    }


};
class queue{
    node*front;
    node*back;
    public:
    queue()
    {
        front=NULL;
        back=NULL;

    }
    void push(int x)
    {
        node *n=new node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
        void pop()
        {
            if(front==NULL)
            {
                cout<<"QUEUE IS EMPTY"<<endl;
                return;

            }
            node*t=front;
            cout<<front->data;
            front=front->next;
            delete t; 
        }
        int peek()
        {
            if(front==NULL)
            {
                return 0;
            }
            return front->data;
        }

        
    
    
    


};
int main()
{
    queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();




}