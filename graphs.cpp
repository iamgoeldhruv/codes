#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> adj;
    void addedge(int u,int v,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }

    }
    void print(unordered_map<int,list<int>> adj)
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->"<<endl;
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }

    }
};
int main()
{
    graph g;
    int n;
    cin>>n;
    int m;
    cin>>m;
    int u,v;
   
    for(int i=0;i<m;i++)
    {
        
        cin>>u>>v;
        
        

        
    }
    g.addedge(u,v,0);
    g.print(g.adj);

    


}