#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=m-arr[i];
    }
    cout<<s;
    return 0;
    


}