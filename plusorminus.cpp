#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
        {
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]==1)
        {
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;   
        }
    }
}