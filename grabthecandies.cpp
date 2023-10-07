#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    int arr1[t];
    for(int i=0;i<t;i++)
    {
        int n;
        int e=0;
        int o=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<n;j++)
        {
            if(arr[j]%2==0)
            {
                e+=arr[j];
            }
            else{
                o+=arr[j];
            }
            if(e>o)
            {
                arr1[i]=1;
            }
            else{
                arr1[i]=0;
            }
        }

    }
    for(int i=0;i<t;i++)
    {
        if(arr1[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}