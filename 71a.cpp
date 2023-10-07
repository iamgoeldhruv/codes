#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    
    for(int i=0;i<n;i++)
    {
        string a="";
        
        a.append(arr[i]);
        
        if(a.size()<=10)
        {
            cout<<a<<endl;
        }
        if(a.size()>10)
        {
            cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;;
            
        }
    }
    return 0;
}