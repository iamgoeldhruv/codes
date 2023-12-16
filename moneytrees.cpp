#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int h[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        if(n==0){
            if(a[0]>k){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
            continue;
        }
        vector<pair<long long int,long long int>>v;
        long long int i=0;
        while(i<=n-2){
            if(h[i]%h[i+1]==0){
                long long int j=i;
                if(j<=n-2){
                    while(h[j]%h[j+1]==0){
                        j++;
                        if(j==n-1){
                            break;
                        }
                    }
                }
                v.push_back({i,j});
                i=j+1;
                continue;
            }
            i++;
        }
        long long int maxx=0;
        for(int i=0;i<v.size();i++){
            long long int e=v[i].second;
            long long int s=v[i].first;
            long long int count =0;
            long long int k1=1;
            long long int sum=0;
            while(s<=e){
                sum+=a[s];
                if(sum>k){
                    maxx=max(maxx,count);
                    count=1;
                    
                    sum%=k;
                    s++;
                    continue;


                }
                else{
                    count++;

                }
                s++;

            }
            maxx=max(maxx,count);
           


        }
        cout<<maxx<<endl;
    }
}