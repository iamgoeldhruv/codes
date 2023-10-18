#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int n,m;
        cin>>n>>m;
        if(m>n){
            cout<<(min(a,b)*n)<<endl;
            continue;
        }
       long long int z=n/(m+1);
       long long int rem=n-(z*(m+1));
       long long int c1=a*(z*m)+min(a,b)*(rem);
       long long int c2=b*n;
       

       cout<<min(c1,c2)<<endl;

    }
}