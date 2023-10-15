#include<bits/stdc++.h>
using namespace std;
long long n,m,k,l,t,ans;
int main(){cin>>t;
	while(t--){ans=0;cin>>n>>m;
	l=m/__gcd(n,m);
	while(l%2==0){ans+=n%m;n=n*2;l=l/2;}
	if(l!=1)cout<<-1<<'\n';
	else cout<<ans<<'\n';}}