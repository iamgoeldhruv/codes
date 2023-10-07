class Solution
{
    public:
     
    
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL)
        {
            return true;
        }
        if(r1==NULL and r2!=NULL)
        {
            return false;
        }
         if(r2==NULL and r1!=NULL)
         {
             return false;
         }
        bool c1=isIdentical(r1->left,r2->left);
        bool c2=isIdentical(r1->right,r2->right);
        bool c3=r1->data==r2->data;
        if(c1&&c2&&c3)
        {
            return true;
        }
        else{
            return false;
        }
        //Your Code here
    }
};