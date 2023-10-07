#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int e)
    {   
        
        data=e;
        next=NULL;
    }
};
void insert(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;

    }
    else{
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            

        }
        temp->next=n;
    }

}
void insertatpos1(node *head,int v,int k,int n)
{
    node *n1=new node(v);
    node *temp3=head;
    int c1=1;
    while(c1<k-1)
    {
        temp3=temp3->next;
        c1++;


    }
    node *x3=temp3->next;
    temp3->next=n1;
    n1->next=x3;
    
    
    
    
    
}
void insertatpos2(node *head,int v,int k,int n)
{
    node *n2=new node(v);
    node *temp4=head;
    int c1=1;
    while(c1<n-k)
    {
        temp4=temp4->next;
        c1++;


    }
    node *x4=temp4->next;
    temp4->next=n2;
    n2->next=x4;
    
    
    
    
    
}
void swap(node *head,int k,int n)
{
    if(k>n)
    {
        cout<<0;
        return;
    }
    if(k==1)
    {
        int z=head->data;
        node *x5=head;
        head=head->next;
       
        delete x5;
        node *temp5=head;
        {
            while(temp5->next!=NULL)
            {
                temp5=temp5->next;
            }
            int y=temp5->data;
            node *x6=temp5;
            delete x6;
            insert(head,z);
            node *n6=new node(y);
            {
                n6->next=head;
                n6=head;

            }
            return;


        }
    }

    node *temp1=head;
    node *temp2=head;
    int c=1;
    while(c<k-1)
    {
        temp1=temp1->next;
        c++;


    }
    
    node*x1=temp1->next;
    int a1=temp1->next->data;
    
    temp1->next=temp1->next->next;
   
    delete x1;
    c=1;
    while(c<n-k-1)
    {
        temp2=temp2->next;
        c++;
    }
    int b=temp2->next->data;
    
    node*x2=temp2->next;
    temp2->next=temp2->next->next;
    delete x2;
    insertatpos1(head,b,k,n);
    insertatpos2(head,a1,k,n);
}
    
void display(node* &head) {   
    node*t=head;
    
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
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
    int k;
    cin>>k;
   
    swap(head,k,n);
    if(k<=n)
    {
        display(head);
    }
    
    
   
    
   

}