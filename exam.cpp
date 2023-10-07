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
class stack{
    public:
    int dat;
    node *top=NULL;
    ////stack(int v1)
    //{
    //    dat=v1;
    
    node *n=new node(dat);
    void insert(node *&head,int v)
    {
        node*n=new node(v);
        if(head==NULL)
        {
            head=n;
            top=n;
            return;


        }
        n->next=top;
        top=n;
        
    }
    int pop()
    {
      int a=top->data;
      top=top->next;
      return a;
       

    }
    int  peek()
    {
        return top->data;
    }



};

int main()
{
    node *head=NULL;
    stack st;
    st.insert(head,10);
    st.insert(head,20);
    st.insert(head,30);
    st.insert(head,40);
    st.insert(head,50);
    st.insert(head,60);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    st.insert(head,70);
    cout<<st.pop()<<endl;
    cout<<st.peek();

    



}