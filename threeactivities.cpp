#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<pair<long long int,long long int>>a;
        vector<pair<long long int,long long int>>b;
        vector<pair<long long int,long long int>>c;

        for(int i=0;i<n;i++){
            long long int x;
            cin>>x;
            a.push_back({x,i});
        }
        for(int i=0;i<n;i++){
            long long int y;
            cin>>y;
            b.push_back({y,i});
        }
         for(int i=0;i<n;i++){
            long long int z;
            cin>>z;
            c.push_back({z,i});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        long long int sum=0;
        long long int maxx=0;
        for(int i=n-3;i<n;i++){
             for(int j=n-3;j<n;j++){
                if(b[j].second!=a[i].second){
                     for(int k=n-3;k<n;k++){
                        if(c[k].second!=a[i].second && c[k].second!=b[j].second){
                            sum=a[i].first+b[j].first+c[k].first;
                            maxx=max(maxx,sum);
                        }

            
        }

                }
            
            }
        }
        cout<<maxx<<endl;

      



        

    }
}