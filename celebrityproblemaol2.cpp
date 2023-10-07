class Solution 
{
    
    
    
    public:
    
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
            
        }
    
    while(s.size()!=1)
    {
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(M[a][b]==1)
        {
            s.push(b);
        }
        else{
            s.push(a);
        }
        
    }
    int z=s.top();
    int r=0;
    for(int i=0;i<n;i++)
    {
        if(M[z][i]==0)
        {
            r++;
        }
    }
    bool a;
    if(r==n)
    {
        a=true;
    }
    int c=0;
    bool b;
    for(int i=0;i<n;i++)
    {
        if(M[i][z]==1)
        {
            c++;
        }
    }
    if(c==n-1)
    {
        b=true;
    }
    if(a== true and b==true)
    {
        return z;
    }
    else{
        return -1;
    }
    }
};