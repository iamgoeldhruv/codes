#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j+1],a[j]);
            
            }
        }
    }
    cout<<a[0]<<" "<<a[n-1];
}