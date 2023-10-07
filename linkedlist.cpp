/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;


    }
    
};
void insertattail(node*&head,int val)
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
void insertathead(node *&head,int val)
{
    node*n=new node(val);
    n->next=head;
    head=n;


}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
bool search(node*head,int k)
{
    node*temp=head;
    while(temp!=NULL)
    {
    if(temp->data==k)
    {
        return true;
    }
    temp=temp->next;
    if(temp==NULL)
    {
        return false;
    }
    }

}
void delet(node *head,int k)
{
    if(head=NULL)
    {
        return;
    }
    if(head->next=NULL)
    {
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=k)
    {
        temp=temp->next;

    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteathead(node*&head)
{
    node*temp=head;
    node*todelete=head;
    head=temp->next;
    delete todelete;
}

   



int main()
{
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    //print(head);
    insertathead(head,4);
    insertattail(head,5);
   // print(head);
    //bool a=search(head,2);
    /*if(a==true)
    {
        cout<<"FOUND";
    }
    if(a==false)
    {
        cout<<"NOT FOUND:";
    }*/
    //delet(head,3);
  //  deleteathead(head);
    //print(head);


//}
//size is modifiable
// non contigonous memory**/
/*#include<iostream>
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
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void insertatthetail(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    else{
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
     
    }
    temp->next=n;
    }

}
//void reverse(node*&head)
//{
  //  node*preptr=NULL;
  //  node*currptr=head;
   // node*nextptr;
    //while(currptr!=NULL)
   // {
        //nextptr=currptr->next;
       // currptr->next=preptr;
       // preptr=currptr;
       // currptr=nextptr;


   // }
   // head=preptr;












//}
void kreverse(node* &head,int k)
{
    
}
int main()
{
    node*head=NULL;
    insertatthetail(head,1);
    insertatthetail(head,2);
    insertatthetail(head,3);
    insertatthetail(head,4);
    insertatthetail(head,5);
    insertatthetail(head,6);
    kreverse(head,2);

    //print(head);
    //reverse(head);
    //print(head);

}*/
//reversing k nodes in a linked lists
//TC=0(n);
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;

    }
};
void insertattail(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL){
        head=n;
    }
    else{
        node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;


        }
        temp->next=n;
    }

}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
node* reversek(node*head,int k)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int c=0;
    while(currptr!=NULL and c<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        c++;
    }


    
    if(nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);
        
    }
    return prevptr;

    


}
void makecycle(node*head)
{
    node*temp=head;
    node*k=head->next->next->next;
    while(true){

    
    if(temp->next==NULL)
    {
        temp->next=k;
        break;
    }
    temp=temp->next;
    }

}
//inserting element in a list;
void insert(node*&currptr,int val)
{
    node* n;
    n->data=val;
    n->next=currptr->next;
    currptr->next=n;
  



}
int main()
{
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    insertattail(head,8);
    //display(head);
     
    //makecycle(head);
    
    //display(head);
  
    //node* newhead=reversek(head,2);
   // display(newhead);
   //display(head);
   node*currptr=head;
   for(int i=1;i<3;i++)
   {
    currptr=currptr->next;

   }
   insert(currptr,10);
   display(head);

     
    
    

}*/
//doubly linked list
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*previous;
    node(int x)
    {
        data=x;
        next=NULL;
        previous=NULL;

    }
};
    void insertathead(node*&head,int x)
    {
        node*n=new node(x);
        if(head==NULL)
        {
            n->next=head;
            head=n;

        }
        n->next=head;
        head->previous=n;
        head=n;
    }
    void insertattail(node*&head,int x)
    {
        node*n=new node(x);
        if(head==NULL)
        {
            insertathead(head,x);

        }
        
        
            node*temp=head;
            while(temp->next=NULL);
            {
                temp=temp->next;
            }
            temp->next=n;
            n->previous=temp;
        

        
    }
    void display(node*head)
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" "<<endl;
            temp=temp->next;

        }

    }
    void deelete(node*&head,int x)
    {
        if(head==NULL)
        {
            cout<<"LIST IS EMPTY"<<endl;

        }
        if(head->next== NULL)
        {
            head=NULL;
            delete head;
        }
        else{
            node*temp=head;
            while(temp->data=x)
            {
                temp=temp->next;
            }
            temp->previous->next=temp->next;
            if(temp->next!=NULL){
                temp->next->previous=temp->previous;
            }
            delete temp;
        }
    }
    void deleteathead(node*&head)
    {
        node*dlt=head;
        head=head->next;
        head->previous=NULL;
        delete dlt; 

    }

int main()
{
    node*head=NULL;
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    insertattail(head,8);
    insertattail(head,9);
    display(head);

    



}