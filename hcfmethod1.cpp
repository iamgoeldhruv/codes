#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int a,b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            a=i;
            break;
                
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]==k)
        {
            b=j;
            break;
        }
    }
    swap(arr[a],arr[b]);
    if(k>n)
    {
        cout<<0;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

}
