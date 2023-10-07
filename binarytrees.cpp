 #include<iostream>
 using namespace std;
//  class treenode{
//     public:
//     int data;
//     treenode* left;
//     treenode* right;
//     treenode(int v)
//     {
//         data=v;
//         left=NULL;
//         right=NULL;
//     }

//  };
//  class bst{
//     public:
//     treenode* root;
//     bool isempty()
//     {
//         if(root==NULL)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     void insert(treenode* n)
//     {
//         treenode* temp=root;
//         if(temp==NULL)
//         {
//             root=n;
//             return;
//         }
//         else{
//             while(temp!=NULL)
//             {
//                 if(temp->data==n->data)
//                 {
//                     return;
//                 }
//                 else if((temp->data<n->data)&&(temp->left==NULL))
//                 {
//                     temp->left=n;
//                     return;

//                 }
//                 else if((temp->data<n->data)){
//                     temp=temp->left;
//                 }
//                 else if((temp->data>n->data)&&(temp->right==NULL))
//                 {
//                     temp->right=n;
//                     return;
//                 }
//                 else if((temp->data>n->data)){
//                     temp=temp->right;
//                 }


                
//             }
//         }


//     }

    
//  };

  

//  int main()
//  {
//     bst b;
//     // performing insertion
//     int v;
//     cout<<"enter value to be inserted in a bst"<<endl;
//     cin>>v;
//     treenode *n=new treenode(v);
//     b.insert(n);

     


//  } 
//function for preorder transversal
// void preorder(treenode* root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     cout<<root->data;
//     preorder(root->left)
//     preorder(root->right)
// }
//function for inorder
// void inorder(treenode* n)
// {
//     if(n==NULL)
//     {
//         return;
//     }
//     inorder(n->left)
//     cout<<n->value;
//     inorder(n->right)
//function for postorder
// void postorder(treenode *n)
// {
//     if(n==null)
//     {
//         return;
//     }
//     postorder(n->left);
//     postorder(n->right);
//     cout<<n->data;
// }
//iterative preorder using stack
void iteratrivepreorder(node * root)
{
    // Base Case
    if(root==NULL)
    {
        return;
    }
    // Create an empty stack and push root to it
    stack<node*>s;
    s.push(root);
    /* Pop all items one by one. Do following for every popped item
       a) print it
       b) push its right child
       c) push its left child
    Note that right child is pushed first so that left is processed first */
    while(stack.empty()==false){
        node *n=stack.top();
        cout<<n->data;
        s.pop();
        s.push(n->right);//if not null

        s.push(n->left);//of not null
    }

}
//level order traversal using queue
