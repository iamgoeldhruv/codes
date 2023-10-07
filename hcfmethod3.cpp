#include<iostream>
#include<cmath>
using namespace std;
int hcf(int a,int b)
{
    int c=(a%b);
    if(c==0)
    {
        return b;
    }
    else
    {
        hcf(b,c);
    }
}
int main()
{
    int a,b;
    cout<<"enter greater no."<<endl;
    cin>>a;
    cout<<"enter smallr no."<<endl;
    cin>>b;
    cout<<"the hcf is:"<<hcf(a,b);
    return 0;
}
