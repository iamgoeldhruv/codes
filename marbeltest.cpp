#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        vector<pair<long long int,long long int>>c;
        vector<pair<long long int,long long int>>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c.push_back({a[i],i});
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            d.push_back({b[i],i});
        }
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        long long int k=n;
        long long int i=n-1;
        long long int j=n-1;
        map<long long int,long long int>m;
        long long int c1=0;
        while(k>0){
            if(c1==0){
                while(m[d[j].second]==1){
                    j--;
                }
                while(m[c[i].second]==1){
                    i--;
                }
                
                if(c[i].first>d[j].first){
                    m[c[i].second]=1;
                    a[c[i].second]--;
                    b[c[i].second]=0;
                    i--;
                    

                }
                else{
                    m[d[j].second]=1;
                    b[d[j].second]=0;
                    a[d[j].second]--;
                    j--;


                }
                c1=1;
                k--;
                 for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
           
                continue;
            }
            if(c1==1){
                while(m[d[j].second]==1){
                    j--;
                }
                while(m[c[i].second]==1){
                    i--;
                }
                if(d[j].first>c[i].first){
                    m[d[j].second]=1;
                    b[d[j].second]--;
                    a[d[j].second]=0;
                    j--;

                }
                else{
                    m[c[i].second]=1;
                    b[c[i].second]--;
                    a[c[i].second]=0;
                    i--;

                }
                c1=0;
                k--;
                 for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
            
            }
        }
        long long int sum1=0;
        long long int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=a[i];
            sum2+=b[i];
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        cout<<sum1-sum2<<endl;
    }
}