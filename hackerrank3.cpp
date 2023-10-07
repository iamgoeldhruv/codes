#include<iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                cout<<a[i];
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==0)
    {
        cout<<a[0];
    }
}