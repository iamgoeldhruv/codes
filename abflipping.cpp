#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
string s;
signed main(){
	cin>>t;
	while(t--){
		cin>>n>>s;s=" "+s;
		int l=1,r=n,ans=0,cnt=0;
		while(s[l]=='B')l++;
		while(s[r]=='A')r--;
		if(l>r){
			cout<<"0\n";
			continue;
		}
		cout<<r-l<<"\n";
	}
	return 0;
}