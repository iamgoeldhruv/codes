#include<iostream>
using namespace std;
 class node{
        public:
        int data;
        node *next;
        node *prev;
        node(int v)
        {
            data=v;
            prev=NULL;
            next=NULL;
        }
};
void insert(node *&head,int v)
{
    node *n=new node(v);
    if(head==NULL)
    {
        head=n;
        head->next=NULL;
        head->prev=NULL;
        return;
    }
    else{
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
    }
}
void print(node* &head)
{
    node*t=head;
    
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

int main()
{
    node *head=NULL;
    int n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        insert(head,a);
    }
    print(head);
}

 
