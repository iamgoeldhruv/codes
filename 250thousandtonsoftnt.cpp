#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        long long int sum[n+1];
        long long int c=0;
        for(int i=0;i<n;i++){
            c+=a[i];
            sum[i+1]=c;

        }
        sum[0]=0;
       vector<long long int>v;
       for(int i=1;i<=sqrt(n)+1;i++){
            if(n%i==0){
                if(i!=1){  v.push_back(i);}
               
                if(i!=n/i and n/i!=1){
                    v.push_back(n/i);

                }
            }
        }
        vector<long long int>v1;
        
        for(int i=0;i<v.size();i++){
            long long int p=v[i];
            long long int q=n/p;
            long long int max=0;
            long long int r=0;
            long long int ww1;
           
            int count =0;
            vector<long long int>v2;
            for(int j=q;j<=n;j+=q){
                count ++;
                
                long long int www=sum[j]-sum[r];
                r=j;
                v2.push_back(www);
              
               

            }
            sort(v2.begin(),v2.end());
            v1.push_back(v2[v2.size()-1]-v2[0]);




        }
        sort(v1.begin(),v1.end());
        cout<<v1[v1.size()-1]<<endl;

    }
}