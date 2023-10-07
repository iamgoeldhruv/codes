//fifo
//first in first out
//enqueue()pushes an element in a queue
//dequeue pops element from stack
//peek epty you know
//implementation using array
/*#include<iostream>
using namespace std;
int n=5;
class queue{
    public:
    int *arr;
    int front;
    int back;
    queue()
    {
        arr=new int[n];
        front =-1;
        back=-1;


    }

    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"QUEUE OVERFLOW"<<endl;
        }
        arr[back+1]=x;
        
        back++;
        {
            if(front==-1)
            {
                front++;
            }
        }
    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
            front++;
        }

    }
    int peak()
    {
        if(front==-1 || front>back)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
        }
        else{
            cout<<arr[back];
            
        }

    }
    bool isempty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        else{
            return false;
        }
        
        
    }
};

   


int main()
{
    queue q;
    q.push(5);
    q.push(67);
    q.push(9);
    q.push(11);
    q.pop();
    q.pop();
    q.peak();
    q.peak();
    q.pop();
    q.isempty();
    q.pop();
    q.isempty();
}*/
//linked list implementation of queue
//we do not use array as space get wasted 
//effective utilization of space does not take place
//all operations have tc=0(n);
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class queue{
    node *front;
    node *back;
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
        node*n=front;
        front=front->next;
        delete n;
        return; 
    }
    void peak()
    {
        if(front==NULL)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
            return ;
        }
        cout<<front->data<<endl;
    }
    bool isempty()
    {
        if(front==NULL)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.peak();
    q.peak();
    q.pop();
    cout<<q.isempty();
    q.pop();
    q.isempty();

}*/





