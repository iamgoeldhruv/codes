// #include<iostream>
// using namespace std;
// class heap{
//     public:
//     int arr[100];
//     int size;
//     heap()
//     {
//         arr[0]=-1;
//         size=0;


//     }
//     void insert(int v)
//     {
//         size=size+1;
//         int index=size;
//         arr[size]=v;
//         while(index>1)
//         {
//             int parent=index/2;
//             if(arr[parent]>arr[index])
//             {
//                 swap(arr[parent],arr[index]);
//                 index=parent;

//             }
//             else{
//                 return;
//             }
//         }
//     }
//     void deelete()
//     {
//         int max(int a,int b)
//         {
//             if(a>b)
//             {
//                 return a;
//             }
//             else{
//                 return b;
//             }
//         }
//         if(size==0)
//         {
//             return;

//         }
//         int i=1;
//         while(i<size)
//         {
//             int l=2*i;
//             int r=2*i+1;
//            int m= max(arr[l],arr[r]);
//             if(arr[i]>m)
//             {
//                 swap(arr[i],arr[arr.index(m)]);
//                 i=arr.index(m);
//             }
//         }
//     }
        
    


// };
// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(80);

//     h.insert(55);

//     h.insert(90);

//     h.insert(52);

//     h.insert(57);
//     h.deelete();




// }
//include<iostream>
//insertion in a bst
// #include<iostream>

// using namespace std;
// class node{
//     public:
//     int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         data=d;
//         left=NULL;
//         right=NULL;

//     }

// };
// node* insertatbst(node *&root,int d)
// {
//     if(root==NULL)
//     {
//         root=new node(d);
//         return root;
//     }
//     if(d>root->data)
//     {
//         root->right=insertatbst(root->right,d);
//     }
//     else{
//         if(d<root->data)
//         {
//             root->left=insertatbst(root->left,d);
//         }
        

//     }
// }

// void takeinput( node *&root)
// {
//     int data;
//     cin>>data;
//     while(data!=-1)
//     {
//         insertatbst(root,data)
//     }


// }
// int main()
// {
//     node *root=NULL;
//     cout<<"take input"<<endl;
//     takeinput(root);

 

// }
//searching for a node in bst
// bool search(node *root,int d)
// {
//     node *temp==root;
//     if(temp==NULL)
//     {
//         return false;
//     }
//     if(temp->data==d)
//     {
//         return true;
//     }

//     else if(temp->data>d)
//     {
//         return(search(temp->left,d));
//     }
//     else{
//         return(search(temp->right,d));
//     }
// }
node * todelete(node *root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(root->data==val)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child 
        //left child
        if(root->left!=NULL && root->right==NULL)
        {
            node *temp=root->left;
            delete root;
            return temp;

        }
        //same for right
        //2 child
        if(root->left!=NULL and root->rignt->left)
        {
            int min=minval(root->right)->data;
            root->data=min;
            root->right=todelete(root->right,min)  

        }


    }
    else if(root->data>val)
    {
        root->left=todelete(root->left,val)

    }
    else(root->data<val)
    {
        root->right=todelete(root->right,val)

    }



}
  

 