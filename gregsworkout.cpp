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
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    int j=1;
    int k=2;
    while(i<n)
    {
        a+=arr[i];
        i+=3;
    }
    while(j<n)
    {
        b+=arr[j];
        j+=3;

    }
    while(k<n)
    {
        c+=arr[k];
        k+=3;

    }
    if(a>b and a>c)
    {
        cout<<"chest";
    }
    else if(b>a and b>c)
    {
        cout<<"biceps";
    }
    else if(c>a and c>b)
    {
        cout<<"back";
    }
    return 0;

}