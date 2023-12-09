#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(),a.end())
#define sa(a,n) sort(a,a+n)
#define mp(a,b) make_pair(a,b)
#define all(x) x.begin(),x.end()
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define unique(v) v.erase(std::unique(v.begin(), v.end()), v.end());
long long   gcd(long long  a, long long  b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
long long   lcm(long long  a, long long  b)
{
return (a / gcd(a, b)) * b;
}






int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;

    string s;
    cin>>s;
    int ans=0 ;

    if(n&1) ans = 1;
    map <int,int> mp ;

    fo(i,0,n){
        mp[s[i]]++;
    }
    if(n%2==0){
    for(auto i : mp){
        
         if(i.second>n/2){
            ans += (i.second - n/2)*2;
         } 
    }

    }
    if(n&1){

        for(auto i: mp){
            
             if(i.second> (n/2 +1))
             {
                ans += (i.second - (n/2+1))*2;
             } 

        }
    }

    cout<<ans<<endl;
}
 return 0;
}