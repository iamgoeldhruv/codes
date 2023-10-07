#include<iostream>
using namespace std;
long long x[200010],y[200010];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,a,b,ans,rex=1e10,rey=1e10;
		cin>>n>>k>>a>>b;
		for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
		ans=abs(x[a]-x[b])+abs(y[a]-y[b]);
		for(int i=1;i<=k;i++)
		{
			rex=min(abs(x[i]-x[a])+abs(y[i]-y[a]),rex);
			rey=min(abs(x[i]-x[b])+abs(y[i]-y[b]),rey);
			ans=min(rex+rey,ans);
		}
		cout<<ans<<endl;
		}
}