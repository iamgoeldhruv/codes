#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int l[n];
        long long int r[n];
        long long int c[n];
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(l,l+n);
        sort(r,r+n);
        long long int diff[n];
        for(int i=0;i<n;i++){
            diff[i]=r[i]-l[i];
        }
        sort(diff,diff+n);
        sort(c,c+n);
        long long int sum=0;
        long long int sum1=0;
        for(int i=0;i<n;i++){
            sum+=diff[i]*c[n-1-i];
            sum1+=diff[i]*c[i];

        }
        cout<<min(sum,sum1)<<endl;

    }
}