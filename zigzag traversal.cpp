class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int>result;
        if(root==NULL)
        {
            return result;
        }
        
        queue<Node *>q;
        q.push(root);
        bool ltr=true;
        while(!q.empty())
        {
            vector<int>temp(q.size());
            for(int i=0;i<q.size();i++)
            {
                Node *n=q.front();
                q.pop();
                int index=ltr?i:q.size()-i-1;
                temp[index]=n->data;
                if(n->left)
                {
                    q.push(n->left);
                }
                if(n->right)
                {
                    q.push(n->right);
                }
                
                
            }
            ltr=!ltr;
           for(auto i:temp)
           {
                result.push_back(i);
            
           }
           
             
        }
    return result;
        
        
    	// Code here
    }
    
};