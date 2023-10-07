class Solution 
{
    
    
    
    public:
    bool checkrow(int i,int j,vector<vector<int> >& M)
    {
        int a=0;
        for(int j=0;j<M.size();j++)
        {
            if(M[i][j]==1)
            {
                a++;
            }
        }
        if(a==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool checkcolumn(int i,int j,vector<vector<int> >& M)
    {
        int b=0;
        for(int i=0;i<M.size();i++)
        {
            if(M[i][j]==1)
            {
                 b++;
            }
            
        }
        if(b==M.size()-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i=0;
        while(i<n)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    bool a=checkrow(i,j,M);
                    bool b=checkcolumn(i,j,M);
                    if(a&&b)
                    {
                        return j;
                    }
                }
            }
        }
        return -1;
    }
};