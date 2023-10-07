#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++)
        {
            arr[j]=j+1;
            sum+=j+1;
        }
        int z=sum%n;
        arr[0]+=z;
        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

}