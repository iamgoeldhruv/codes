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
void insert(node* &head,int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        n->next=head;
        n->prev=NULL;
        return;
    }
    else{
        node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;

        }
        n->next=head;
        n->prev=temp;
        head->prev=n;
        temp->next=n;
        return;
    }


}
void display(node *head)
{
    node *temp1=head;
    cout<<head->data<<" ";
    temp1=temp1->next;
    while(temp1!=head)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}
int mood(int p)
{
    int w=(p*p+5*p+1)%7;
    
    return w;
}
void fault(node *head,int n)
{
    int c=0;
    
    node *temp2=head;
    while(true)
    {
        if(n-c<=7)
        {
            return;
        }
        int q=temp2->data;
        
        int z=mood(q);
        
        
        for(int i=0;i<z;i++)
        {
            temp2=temp2->next;
        }
        node *x=temp2;
        temp2->next->prev=temp2->prev;
        temp2->prev->next=temp2->next;
        
        temp2=temp2->next;
        delete x;
        
        c++;
        
        
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
    fault(head,n);
    display(head);
  
   
    

}