#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        if(k*ak-m==0){
            cout<<0<<endl;
            continue;
 
        }
        else if(m<k*ak){
            long long int t=m%k;
            if(t<=a1){
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<(t-a1)<<endl;
                continue;
 
 
            }
        }
        else if(m>k*ak){
            vector<int>v;
            for(int i=0;i<a1;i++){
                long long int p=m-k*ak;
            if(p<=i){
                v.push_back(0);
                continue;
            }
            else{
                long long int z=p-i;
                if(z%k==0){
                    v.push_back(z/k);
                    continue;
 
                }
                else{
                    long long int x=z/k+(z-(k*(z/k)));
                     v.push_back(x);
                    continue;
                }
            }
            }
            sort(v.begin(),v.end());
                cout<<v[0]<<endl;
            
        }
    }
}