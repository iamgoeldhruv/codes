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
    int a=arr[0];
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            c++;
            a=arr[i];
        }


    }
    cout<<c;
    return 0;
}