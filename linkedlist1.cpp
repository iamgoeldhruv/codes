#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val)
    {
        data=val;
        next=NULL;

    }
    


};
void insertathead(node* &head,int val)
{
    node*temp=new node(val);
    temp->next=head;
    head=temp;


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
    node*node1=new node(50);
    //cout<<node1->data<<endl;
   // cout<<node1->next<<endl;
    node*head=node1;
    print(head);
    insertathead(head,2);
    print(head);

}