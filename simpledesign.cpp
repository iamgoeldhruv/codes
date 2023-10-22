#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int x,k,n;
int sum(int a){
	if(a>=10){
		return (a%10)+(sum(a/10));
	}
	return a;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>k;
		while((sum(x)%k)!=0){
			x++;
		}
		cout<<x<<endl;
	}
}
