#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define pb push_back 
#define fo(j,a,n) for(int j=a;j<n;j++)
#define tr(it,a) for(auto it:a)
#define mp make_pair
int N=1e7+10;
int M=1e9+7;
/*vector<int> fact(N,1);
int po(int n,int m){
    int count=0;
    while(n>0){
        n/=m;
        count++;
    }
  return count;  
}
*/
int binpow(int a,int b){
 if(b==0) return 1;
 int res=binpow(a,b/2);
 if(b&1){
     return (a*((res*res)));
 }
 else{
    return (res*res);
 }
}
/*
int binpow(int a,int b,int M){
 if(b==0) return 1;
 int res=binpow(a,b/2);
 if(b&1){
     return (a*((res*res)%M))%M;
 }
 else{
    return (res*res)%M;
 }
}
int mai(int n){
    return binpow(n,M-2)%M;
}

vector<bool> isprime(N,1);
vector<int> lp(N,0),hp(N,0);
     isprime[0] = isprime[1]= false;
for(int i=2;i<N;++i){
    if(isprime[i]==true){
        lp[i]=hp[i]=i;
        for(int j=2*i;j<N;j+=i){
            isprime[j]=false;
            hp[j]=i;
            if(lp[j]==0){
                lp[j]=i;
            }
        }
    }
}
*/
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
int t;
cin>>t;
fo(i,0,t){
int n;
cin>>n;
int a[n];
int sum=0;
int count=0;
fo(j,0,n){
    cin>>a[j];
}
int l=0;
int r=n-1;
int b=1;
int c=n;
while(l<r){
  if(a[l]==b){
         l++;
      b++;
   
  }
  else if(a[l]==c){
      l++;
      c--;
  }
   else if(a[r]==b){
      r--;
      b++;
  }
  else if(a[r]==c){
      r--;
      c--;
  }
  else if(l>=r){
       count++;
      break;
     
  }
   else{
      break;
  }
}
if(l==r){
    cout<<-1<<endl;
}
else {
    cout<<l+1<<" "<<r+1<<endl;
}

}
	return 0;
}
