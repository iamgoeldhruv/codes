#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    int a1[n];
    int a2[n];
    for(int i=0;i<n;i++)
    {
        int h=0;
        int g=0;
        cin>>h>>g;
        a1[i]=h;
        a2[i]=g;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a1[i]==a2[j])
                {
                    c++;
                }
            }
        }
    }
    cout<<c;
    return 0;
}





