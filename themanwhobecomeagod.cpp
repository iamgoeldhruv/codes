#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int sum[n-1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                sum[i-1]=fabs(a[i]-a[i-1]);
            }
        }
        sort(sum,sum+n-1);
        int s=0;
        for(int i=0;i<n-k;i++){
            s+=sum[i];
        }
        cout<<s<<endl;
    }
}