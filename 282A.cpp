#include<iostream>
using namespace std;
int main()
{
    int x=0;
    int n;
    cin>>n;
    cout<<x;
    return 0;
    for(int i=1;i<=n;i++)
    {
        string p;
        if(p=="x++")
        {
            x++;
        }
        if(p=="++x")
        {
            ++x;
        }
        if(p=="x--")
        {
            x--;
        }
        else{
            --x;
        }
    }
    cout<<x;
    return 0;
}


        
   
