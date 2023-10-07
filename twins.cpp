#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j+1]>arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
        if(sum1>sum/2)
        {
            cout<<i+1<<endl;
            break;
        }
        
    }
}