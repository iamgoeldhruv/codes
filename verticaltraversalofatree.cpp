class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map<int,map<int,vector<int> > >map;
        queue<pair<Node * ,pair<int,int> > >q;
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty())
        {
            pair<Node* ,pair<int,int> > temp=q.front();
            q.pop();
            Node* n=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            map[hd][lvl].push_back(n->data);
            if(n->left)
            {
                q.push(make_pair(n->left,make_pair(hd-1,lvl+1)));
                
            }
            if(n->right)
            {
                q.push(make_pair(n->right,make_pair(hd+1,lvl+1)));
                
            }
               
            
            
            
            
            
        }
        for(auto i:map)
        {
            for(auto j:i.second)
            {
                for(auto k:j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;
        
         
        
        
    }
};