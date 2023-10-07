#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    
    
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==1 or b+c==1 or c+a==1)
        {
            count+=1;
        }
    }
    cout<<count;
    return 0;
}