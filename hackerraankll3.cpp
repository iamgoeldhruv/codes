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
        next=NULL;
        prev=NULL;
    }

};
void insert(node *&head,int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        n->next=NULL;
        n->prev=NULL;
        return;
    }
    else{
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        n->next=head;
        n->prev=temp;
        head->prev=n;
        temp->next=n;
    }


}
void display(node *head)
{
    node *temp=head;
    cout<<head->data<<" ";
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        insert(head,a);
    }
    display(head);

}