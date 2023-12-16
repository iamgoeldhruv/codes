#include<iostream>
using namespace std;
int main()
{   
int t;
cin>>t;
while(t--)
{
	int n,k,c=0,m=0;
	cin>>n>>k; 
	int a[n],s[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<n;i++)
{	if (abs(a[i]-a[i-1]<=k))
   {	c++;

   }
   else c=0;
    m=max(m,c);
}
   cout<<n-m-1<<endl;
}
}
