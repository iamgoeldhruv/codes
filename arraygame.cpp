#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<long double>v;
        long long int c=0;
        for(int i=0;i<n;i++){
            long double x;
            cin>>x;
            v.push_back(x);
        }
        long long int i=0;
        

        while(i<k){
            sort(v.begin(),v.end());
            vector<long double>diff;
            map<long long int,long long int>m;
            for(int j=0;j<v.size()-1;j++){
                diff.push_back(fabs(v[i]-v[i+1]));
            }
            sort(diff.begin(),diff.end());
           
            for(int j=0;j<diff.size();i++){
                if(m[j]==1 and i<n-2){
                    c++;
                   v.push_back(0);
                    break;
                }
                else{
                    m[j]++;
                }

            }
            v.push_back(diff[0]);
            i++;
            if(c>0){
                break;
            }
            
            if(i!=k-1 and diff.size()>=2){
            if(fabs(diff[0]-diff[1])<diff[0]){
                v.push_back(fabs(diff[0]-diff[1]));
                i++;
            }}
           
        }sort(v.begin(),v.end());
        long long int a=v[0];
        cout<<a<<endl;
    }
}