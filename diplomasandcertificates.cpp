#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    long long int k;
    cin>>n>>k;
    long long int z=floor(n/2);
    long long int d=z/(k+1);
    long long int c=k*d;
    long long int nw=n-c-d;
    cout<<d<<" "<<c<<" "<<nw;

}